#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathsHelper.h"
#include "TriangleMathsStruct.generated.h"

USTRUCT(BlueprintType)
struct FTriangleMathsStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "MathsHelper|Geometry|Triangle")
	FVector2D A;

	UPROPERTY(BlueprintReadWrite, Category = "MathsHelper|Geometry|Triangle")
	FVector2D B;

	UPROPERTY(BlueprintReadWrite, Category = "MathsHelper|Geometry|Triangle")
	FVector2D C;

public:
	double ABdistance()const { return FVector2D::Distance(A, B); }
	double ACdistance()const { return FVector2D::Distance(A, C); }
	double BCdistance()const { return FVector2D::Distance(B, C); }
public:
	/*
	* 计算二维空间三角形是顺时针、逆时针、或零向量
	* const FVector2D& A 第一个点
	* const FVector2D& B 第二个点
	* const FVector2D& A 第三个点
	* return int -1:零向量 0:顺时针 1:逆时针
	*/
	static int CalTriangleDirection(const FVector2D& A, const FVector2D& B, const FVector2D& C)
	{
		const double temp = FVector2D::CrossProduct(A - B, A - C);
		if (temp > 0)
		{
			//顺时针
			return 0;
		}
		if (temp < 0)
		{
			//逆时针
			return 1;
		}
		return -1;
	}

	/*根据三角形边长变成计算角的弧度*/
	static double ComputeTriangleRadians(double a, double b, double c)
	{
		return FMath::Acos((b * b + c * c - a * a) / (2 * b * c));
	}
public:
	double Aradinas()const { return ComputeTriangleRadians(BCdistance(), ACdistance(), ABdistance()); }
	double Aangle() const { return FMath::RadiansToDegrees(Aradinas()); }
	double Bradinas()const { return ComputeTriangleRadians(ACdistance(), BCdistance(), ABdistance()); }
	double Bangle() const { return FMath::RadiansToDegrees(Bradinas()); }
	double Cradinas()const { return ComputeTriangleRadians(ABdistance(), BCdistance(), ACdistance()); }
	double Cangle() const { return FMath::RadiansToDegrees(Cradinas()); }
public:
	FVector2D ABvector()const { return B - A; }
	FVector2D ACvector()const { return C - A; }
	FVector2D BCvector()const { return C - B; }

	/*角平分线*/
public:
	FVector2D AangleBisectorVector()const
	{
		const FVector2D tempDir = (ABvector().GetSafeNormal() + ACvector().GetSafeNormal());

		FVector2D tempHitPos;
		UMathsHelper::LineSegmentIntersectionFromVector(B, C, A, tempDir, tempHitPos);
		return tempHitPos - A;
	}

	FVector2D BangleBisectorVector()const
	{
		const FVector2D tempDir = (ABvector().GetSafeNormal() * -1.0 + BCvector().GetSafeNormal());

		FVector2D tempHitPos;
		UMathsHelper::LineSegmentIntersectionFromVector(A, C, B, tempDir, tempHitPos);
		return tempHitPos - B;
	}

	FVector2D CangleBisectorVector()const
	{
		const FVector2D tempDir = (ACvector().GetSafeNormal() * -1.0 + BCvector().GetSafeNormal() * -1.0);

		FVector2D tempHitPos;
		UMathsHelper::LineSegmentIntersectionFromVector(A, B, C, tempDir, tempHitPos);
		return tempHitPos - C;
	}

	/*中线*/
public:
	FVector2D AmedianVector()const
	{
		const FVector2D tempDir = (ABvector() + ACvector()).GetSafeNormal();

		FVector2D tempHitPos;
		UMathsHelper::LineSegmentIntersectionFromVector(B, C, A, tempDir, tempHitPos);
		return tempHitPos - A;
	}

	FVector2D BmedianVector()const
	{
		const FVector2D tempDir = (ABvector() * -1.0 + BCvector()).GetSafeNormal();

		FVector2D tempHitPos;
		UMathsHelper::LineSegmentIntersectionFromVector(A, C, B, tempDir, tempHitPos);
		return tempHitPos - B;
	}

	FVector2D CmedianVector()const
	{
		const FVector2D tempDir = (ACvector() * -1.0 + BCvector() * -1.0).GetSafeNormal();

		FVector2D tempHitPos;
		UMathsHelper::LineSegmentIntersectionFromVector(A, B, C, tempDir, tempHitPos);
		return tempHitPos - C;
	}

	/*垂线*/
public:
	FVector2D AaltitudeVector()const
	{
		const FVector2D tempBC = BCvector().GetSafeNormal();

		const FVector2D temp1(-tempBC.Y, tempBC.X);

		FVector2D tempHitPos;
		UMathsHelper::LineSegmentIntersectionFromVector(B, C, A, temp1, tempHitPos);
		return (tempHitPos - A);
	}

	FVector2D BaltitudeVector()const
	{
		const FVector2D tempAC = ACvector().GetSafeNormal();

		const FVector2D temp1(-tempAC.Y, tempAC.X);

		FVector2D tempHitPos;
		UMathsHelper::LineSegmentIntersectionFromVector(A, C, B, temp1, tempHitPos);
		return (tempHitPos - B);
	}

	FVector2D CaltitudeVector()const
	{
		const FVector2D tempAB = ABvector().GetSafeNormal();

		const FVector2D temp1(-tempAB.Y, tempAB.X);

		FVector2D tempHitPos;
		UMathsHelper::LineSegmentIntersectionFromVector(A, B, C, temp1, tempHitPos);
		return (tempHitPos - C);
	}
public:
	double AreaByHeronsFormula()const
	{
		//海伦公式
		const double a = BCdistance();
		const double b = ACdistance();
		const double c = ABdistance();

		double s = (a + b + c) / 2.0;
		double area = FMath::Sqrt(s * (s - a) * (s - b) * (s - c));
		return area;
	}
	double AreaByCrossVector() const
	{
		return FMath::Abs(FVector2D::CrossProduct(ACvector(), ABvector())) / 2.0;
	}
};


UCLASS()
class MATHSISEVERTHING_API UTriangleMathsHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TriangleMathsHelper|Geometry|Triangle")
	static void TestGetTriangleAngle(const FTriangleMathsStruct& In, double& Aangle, double& Aradians, double& Bangle, double& Bradians, double& Cangle, double& Cradians)
	{
		Aangle = In.Aangle();
		Aradians = In.Aradinas();
		Bangle = In.Bangle();
		Bradians = In.Bradinas();
		Cangle = In.Cangle();
		Cradians = In.Cradinas();
	}


	UFUNCTION(BlueprintCallable, Category = "TriangleMathsHelper|Geometry|Triangle")
	static void TestGetTriangleVector(const FTriangleMathsStruct& In,
		FVector2D& AB, FVector2D& AC, FVector2D& BC,
		FVector2D& AangleBisectorVector, FVector2D& BangleBisectorVector, FVector2D& CangleBisectorVector,
		FVector2D& AmedianVector, FVector2D& BmedianVector, FVector2D& CmedianVector,
		FVector2D& AaltitudeVector, FVector2D& BaltitudeVector, FVector2D& CaltitudeVector)
	{
		AB = In.ABvector();
		AC = In.ACvector();
		BC = In.BCvector();

		AangleBisectorVector = In.AangleBisectorVector();
		BangleBisectorVector = In.BangleBisectorVector();
		CangleBisectorVector = In.CangleBisectorVector();

		AmedianVector = In.AmedianVector();
		BmedianVector = In.BmedianVector();
		CmedianVector = In.CmedianVector();

		AaltitudeVector = In.AaltitudeVector();
		BaltitudeVector = In.BaltitudeVector();
		CaltitudeVector = In.CaltitudeVector();
	}

	UFUNCTION(BlueprintCallable, Category = "TriangleMathsHelper|Geometry|Triangle")
	static double TestGetTriangleAreaByHeronsFormula(const FTriangleMathsStruct& In)
	{
		return In.AreaByHeronsFormula();
	}

	UFUNCTION(BlueprintCallable, Category = "TriangleMathsHelper|Geometry|Triangle")
	static double TestGetTriangleAreaByCrossVector(const FTriangleMathsStruct& In)
	{
		return In.AreaByCrossVector();
	}

};
