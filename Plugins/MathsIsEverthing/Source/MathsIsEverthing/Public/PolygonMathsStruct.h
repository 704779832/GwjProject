#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathsHelper.h"
#include "PolygonMathsStruct.generated.h"

USTRUCT(BlueprintType)
struct FPolygonMathsStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "MathsHelper|Geometry|Polygon")
	TArray<FVector2D> Points;

public:
	bool IsPointOnPolygon(const FVector2D& P, double Epsilon = 0.00001)const
	{
		return UMathsHelper::IsPointOnPolygon(Points, P, Epsilon);
	}

	double AreaByCrossVector()const
	{
		double area = 0.0;
		const int n = Points.Num();
		for (int i = 0; i < n; ++i)
		{
			area += Points[i].X * Points[(i + 1) % n].Y - Points[i].Y * Points[(i + 1) % n].X;
		}
		return area;
	}

	void Triangularization(TArray<FVector2D>& OutPosition, TArray<int32>& OutIndices)const
	{
		OutPosition = Points;
		OutIndices = UMathsHelper::PolygonEarCut(Points, {});
	}
};

USTRUCT(BlueprintType)
struct FPolygonWithHoleMathsStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "MathsHelper|Geometry|Polygon")
	TArray<FVector2D> Points;

	UPROPERTY(BlueprintReadWrite, Category = "MathsHelper|Geometry|Polygon")
	TArray<FPolygonMathsStruct> Holes;
public:
	bool IsPointOnPolygon(const FVector2D& P, double Epsilon = 0.00001)const
	{
		//排除挖洞
		for (const FPolygonMathsStruct& temp : Holes)
		{
			if (UMathsHelper::IsPointOnPolygon(temp.Points, P, Epsilon))
			{
				return false;
			}
		}

		return UMathsHelper::IsPointOnPolygon(Points, P, Epsilon);
	}

	double AreaByCrossVector()const
	{
		double area = 0.0;
		{
			const int n = Points.Num();
			for (int i = 0; i < n; ++i)
			{
				area += Points[i].X * Points[(i + 1) % n].Y - Points[i].Y * Points[(i + 1) % n].X;
			}
		}

		//减去挖洞的面积
		for (const FPolygonMathsStruct& temp : Holes)
		{
			area -= temp.AreaByCrossVector();
		}

		return area;
	}

	void Triangularization(TArray<FVector2D>& OutPosition, TArray<int32>& OutIndices)const
	{
		OutPosition = Points;

		TArray<TArray<FVector2D>> temp;
		for (const FPolygonMathsStruct& tempPolygon : Holes)
		{
			OutPosition.Append(tempPolygon.Points);

			temp.Add(tempPolygon.Points);
		}
		OutIndices= UMathsHelper::PolygonEarCut(Points, temp);
	}
};

USTRUCT(BlueprintType)
struct FRegularPolygonMathsStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "MathsHelper|Geometry|Polygon")
	FVector2D Center = FVector2D::ZeroVector;

	UPROPERTY(BlueprintReadWrite, Category = "MathsHelper|Geometry|Polygon")
	int N = 3;

	UPROPERTY(BlueprintReadWrite, Category = "MathsHelper|Geometry|Polygon")
	double R = 100.0;

public:
	TArray<FVector2D> GetPoints()const
	{
		return UMathsHelper::GenerateRegularPolygon(Center, N, R);
	}

	void Triangularization(TArray<FVector2D>& OutPosition, TArray<int32>& OutIndices)const
	{
		OutPosition.Empty();
		const TArray<FVector2D> tempPos = GetPoints();
		OutPosition.Add(Center);
		OutPosition.Append(tempPos);

		OutIndices.Empty();

		const int n = tempPos.Num();
		for (int i = 0; i < n; ++i)
		{
			OutIndices.Add(0);
			OutIndices.Add(i + 1);
			OutIndices.Add((i + 1) >= n ? (n + 1) % n : i + 1 + 1);
		}
	}

	double Area() const
	{
		const double inc = 2 * UE_DOUBLE_PI / N;
		double x = R, y = 0;
		const double cosb = FMath::Cos(inc);
		const double sinb = FMath::Sin(inc);
		double nx = x * cosb - y * sinb;
		double ny = y * cosb + x * sinb;

		const FVector2D A(x, y);
		const FVector2D B(nx, ny);

		return N * FMath::Abs(FVector2D::CrossProduct((B - A), (Center - A))) / 2.0;
	}

	bool IsPointOnPolygon(const FVector2D& P, double Epsilon = 0.00001)const
	{
		//return UMathsHelper::IsPointOnPolygon(GetPoints(), P, Epsilon);

		// 计算相对坐标
		double dx = P.X - Center.X;
		double dy = P.Y - Center.Y;
		//求出点到中心点的距离
		const double r = FVector2D::Distance(Center, P);
		//外接圆过滤
		if (r > R + Epsilon)return false;

		//计算内接圆
		double r_in = R * std::cos(UE_DOUBLE_PI / (double)N);
		//内接圆过滤
		if (r < r_in - Epsilon)return true;

		// 计算极角 [0, 2π)
		double theta = FMath::Atan2(dy, dx);
		if (theta < 0) theta += 2 * UE_DOUBLE_PI;

		// 扇区角度和最近顶点计算
		double sector = 2 * UE_DOUBLE_PI / (double)N;
		int k1 = FMath::RoundToInt(theta / sector) % N;

		int k2 = (k1 + 1) % N;

		int k3 = k1 == 0 ? (N - 1) : k1 - 1;

		const FVector2D A = UMathsHelper::GenerateRegularPolygonBySingle(Center, N, R, 0, k1);
		const FVector2D B = UMathsHelper::GenerateRegularPolygonBySingle(Center, N, R, 0, k2);
		const FVector2D C = UMathsHelper::GenerateRegularPolygonBySingle(Center, N, R, 0, k3);

		return UMathsHelper::IsPointOnTriangle(P, A, B, Center)|| UMathsHelper::IsPointOnTriangle(P, A, C, Center);
	}
};

UCLASS()
class MATHSISEVERTHING_API UPolygonMathsHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Polygon")
	static void PolygonTriangularization(const FPolygonMathsStruct& In, TArray<FVector2D>& OutPosition, TArray<int32>& OutIndices)
	{
		In.Triangularization(OutPosition, OutIndices);
	}


	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Polygon")
	static void PolygonWithHoleTriangularization(const FPolygonWithHoleMathsStruct& In, TArray<FVector2D>& OutPosition, TArray<int32>& OutIndices)
	{
		In.Triangularization(OutPosition, OutIndices);
	}

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Polygon")
	static void RegularPolygonTriangularization(const FRegularPolygonMathsStruct& In, TArray<FVector2D>& OutPosition, TArray<int32>& OutIndices)
	{
		In.Triangularization(OutPosition, OutIndices);
	}

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Polygon")
	static double GetPolygonArea(const FPolygonMathsStruct& In)
	{
		return In.AreaByCrossVector();
	}

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Polygon")
	static double GetPolygonAreaWithHole(const FPolygonWithHoleMathsStruct& In)
	{
		return In.AreaByCrossVector();
	}

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Polygon")
	static double GetRegularPolygonArea(const FRegularPolygonMathsStruct& In)
	{
		return In.Area();
	}

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Polygon")
	static bool IsPointOnPolygon(const FPolygonMathsStruct& In, const FVector2D& P, double Epsilon = 0.00001)
	{
		return In.IsPointOnPolygon(P, Epsilon);
	}

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Polygon")
	static bool IsPointOnPolygonWithHole(const FPolygonWithHoleMathsStruct& In, const FVector2D& P, double Epsilon = 0.00001)
	{
		return In.IsPointOnPolygon(P, Epsilon);
	}

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Polygon")
	static bool IsPointOnRegularPolygon(const FRegularPolygonMathsStruct& In, const FVector2D& P, double Epsilon = 0.00001)
	{
		return In.IsPointOnPolygon(P, Epsilon);
	}
};