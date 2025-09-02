#include "MathsHelper.h"
#include "ThirdParty/earcut.hpp"

bool UMathsHelper::IsPointOnSegment(const FVector2D& A, const FVector2D& B, const FVector2D& P, double Epsilon)
{
	FVector2D AB = (B - A).GetSafeNormal();
	FVector2D AP = (P - A).GetSafeNormal();

	if (!IsParallelVector2D(AB, AP, Epsilon))return false;

	//排除延长线上可能
	bool inXRange = (P.X >= FMath::Min(A.X, B.X) - Epsilon) &&
		(P.X <= FMath::Max(A.X, B.X) + Epsilon);
	bool inYRange = (P.Y >= FMath::Min(A.Y, B.Y) - Epsilon) &&
		(P.Y <= FMath::Max(A.Y, B.Y) + Epsilon);

	return inXRange && inYRange;
}

bool UMathsHelper::IsParallelVector2D(const FVector2D& A, const FVector2D& B, double Epsilon)
{
	if (FMath::IsNearlyZero(A.Length(), Epsilon))return true;
	if (FMath::IsNearlyZero(B.Length(), Epsilon))return true;

	return FMath::IsNearlyZero(FMath::Abs(FVector2D::CrossProduct(A, B)), Epsilon);
}

bool UMathsHelper::IsParallelVector3D(const FVector& A, const FVector& B, double Epsilon)
{
	double ratio_x = (B.X != 0) ? A.X / B.X : INFINITY;
	double ratio_y = (B.Y != 0) ? A.Y / B.Y : INFINITY;
	double ratio_z = (B.Z != 0) ? A.Z / B.Z : INFINITY;
	return (abs(ratio_x - ratio_y) < Epsilon) &&
		(abs(ratio_y - ratio_z) < Epsilon);
}

bool UMathsHelper::LineSegmentIntersection(const FVector2D& A, const FVector2D& B, const FVector2D& VStart, const FVector2D& VEnd, FVector2D& OutPos, double Epsilon)
{
	// 参数方程法求解直线交点
	const double A1 = VEnd.Y - VStart.Y;
	const double B1 = VStart.X - VEnd.X;
	const double C1 = VEnd.X * VStart.Y - VStart.X * VEnd.Y;

	const double A2 = B.Y - A.Y;
	const double B2 = A.X - B.X;
	const double C2 = B.X * A.Y - A.X * B.Y;

	const double denominator = A1 * B2 - A2 * B1;
	// 处理平行或共线情况
	if (FMath::IsNearlyZero(denominator, Epsilon)) {
		// 检查线段端点是否在直线上
		if (IsPointOnSegment(A, FVector2D::ZeroVector, VEnd, Epsilon)) {
			OutPos = A;
			return true;
		}
		if (IsPointOnSegment(B, FVector2D::ZeroVector, VEnd, Epsilon)) {
			OutPos = B;
			return true;
		}
		return false;
	}
	// 计算交点坐标
	OutPos.X = (B1 * C2 - B2 * C1) / denominator;
	OutPos.Y = (A2 * C1 - A1 * C2) / denominator;

	// 判断交点是否在线段上
	if (IsPointOnSegment(A, B, OutPos, Epsilon))
	{
		return FVector2D::DotProduct((OutPos - VStart).GetSafeNormal(), (VEnd - VStart).GetSafeNormal()) > 0;
	}
	else
		return false;
}

bool UMathsHelper::LineSegmentIntersectionFromVector(const FVector2D& A, const FVector2D& B, const FVector2D& VStart, const FVector2D& VDir, FVector2D& OutPos, double Epsilon)
{
	return LineSegmentIntersection(A, B, VStart, VStart + VDir, OutPos, Epsilon);
}

bool UMathsHelper::IsPointOnTriangle(const FVector2D& P, const FVector2D& A, const FVector2D& B, const FVector2D& C)
{
	//叉乘，判断中心点是否在各向量的同一侧
	bool Flag1 = FVector2D::CrossProduct(P - A, B - A) > 0;
	bool Flag2 = FVector2D::CrossProduct(P - B, C - B) > 0;
	bool Flag3 = FVector2D::CrossProduct(P - C, A - C) > 0;
	return (Flag1 == Flag2) && (Flag2 == Flag3) && (Flag3 == Flag1);
}

bool UMathsHelper::IsPointOnPolygon(const TArray<FVector2D>& PolygonPoints, const FVector2D& P,double Epsilon)
{
	if (PolygonPoints.Num() < 2)return false;

	const FVector2D CheckDir(1, 0);
	uint32 tempHitCount = 0;
	for (int i = 0; i < PolygonPoints.Num(); ++i)
	{
		FVector2D A, B;
		if (i != PolygonPoints.Num() - 1)
		{
			A = PolygonPoints[i];
			B = PolygonPoints[i + 1];
		}
		else
		{
			A = PolygonPoints[i];
			B = PolygonPoints[0];
		}

		if (IsPointOnSegment(A, B, P, Epsilon))return true;
		
		if (IsParallelVector2D((B - A).GetSafeNormal(), CheckDir, Epsilon))
		{
			continue;
		}

		FVector2D tempHitPos;
		if (!LineSegmentIntersectionFromVector(A, B, P, CheckDir, tempHitPos, Epsilon))
		{

			continue;
		}

		if (FMath::IsNearlyZero(FVector2D::Distance(B, tempHitPos), Epsilon))
		{
			++tempHitCount;
		}
		else if (!FMath::IsNearlyZero(FVector2D::Distance(A, tempHitPos), Epsilon))
		{
			++tempHitCount;
		}
	}

	return tempHitCount % 2 == 0 ? false : true;
}

TArray<int32> UMathsHelper::PolygonEarCut(const TArray<FVector2D>& PolygonPoints, const TArray<TArray<FVector2D>>& PolygonHolePoints)
{
	if(PolygonPoints.Num()==0)return TArray<int32>();
	using mapBoxPoint = std::array<double, 2>;
	std::vector<std::vector<mapBoxPoint>> polygon;

	polygon.push_back({});
	
	polygon[0].resize(PolygonPoints.Num());
	FMemory::Memcpy(polygon[0].data(), PolygonPoints.GetData(), PolygonPoints.GetAllocatedSize());


	//for (const FVector2D& temp : PolygonPoints)
	//{
	//	polygon[0].push_back({ temp.X,temp.Y });
	//}

	for (const TArray<FVector2D>& temp : PolygonHolePoints)
	{
		polygon.push_back({});
		const int32 index = polygon.size() - 1;

		polygon[index].resize(temp.Num());
		FMemory::Memcpy(polygon[index].data(), temp.GetData(), temp.GetAllocatedSize());

		//for (const FVector2D& temp2 : temp)
		//{
		//	polygon[index].push_back({ temp2.X,temp2.Y });
		//}
	}

	std::vector<uint32_t> indices = mapbox::earcut<uint32_t>(polygon);
	TArray<int32> Out;
	Out.SetNumZeroed(indices.size());

	FMemory::Memcpy(Out.GetData(), indices.data(), Out.GetAllocatedSize());
	return Out;
}

TArray<FVector2D> UMathsHelper::GenerateRegularPolygon(const FVector2D& Offset, int N, double R)
{
	TArray<FVector2D> Out;

	const double inc = 2 * UE_DOUBLE_PI / N;
	double x = R, y = 0;
	const double cosb = FMath::Cos(inc);
	const double sinb = FMath::Sin(inc);

	for (int i = 0; i < N; ++i)
	{
		Out.Add({ x+ Offset.X,y+ Offset.Y });
		double nx = x * cosb - y * sinb;
		double ny = y * cosb + x * sinb;
		x = nx;
		y = ny;
	}

	return Out;
}

FVector2D UMathsHelper::GenerateRegularPolygonBySingle(const FVector2D& Offset, int N, double R, double StartAngle, int Index)
{
	if (N < 3 || R <= 0 || Index < 0)return Offset;

	double angle =FMath::DegreesToRadians(StartAngle) + (2 * UE_DOUBLE_PI * Index) / N;
	double x = Offset.X + R * FMath::Cos(angle);
	double y = Offset.Y + R * FMath::Sin(angle);
	
	return FVector2D(x, y);
}

FVector2D UMathsHelper::LinearBezier(const FVector2D& A, const FVector2D& B, double T)
{
	double t = FMath::Clamp(T, 0, 1);
	return {
		A.X + (B.X - A.X) * t,
		A.Y + (B.Y - A.Y) * t
	};
}

FVector2D UMathsHelper::QuadraticBezier(const FVector2D& A, const FVector2D& B, const FVector2D& C, double T)
{
	double t = FMath::Clamp(T, 0, 1);
	double u = 1 - t;
	return {
		u * u * A.X + 2 * u * t * B.X + t * t * C.X,
		u * u * A.Y + 2 * u * t * B.Y + t * t * C.Y
	};
}

FVector2D UMathsHelper::CubicBezier(const FVector2D& A, const FVector2D& B, const FVector2D& C, const FVector2D& D, double T)
{
	double t = FMath::Clamp(T, 0, 1);
	const double u = 1 - t;
	const double u2 = u * u;
	const double t2 = t * t;
	return {
		u2 * u * A.X + 3 * u2 * t * B.X + 3 * u * t2 * C.X + t2 * t * D.X,
		u2 * u * A.Y + 3 * u2 * t * B.Y + 3 * u * t2 * C.Y + t2 * t * D.Y
	};
}

FVector2D UMathsHelper::Nth_orderBezier(const TArray<FVector2D>& Points, double T)
{	
	const int N = Points.Num();
	if (N < 0)return FVector2D::ZeroVector;
	if (N == 1)return Points[0];
	if (N == 2) { return LinearBezier(Points[0], Points[1], T); }

	//TArray<FVector2D> temPoints;
	//for (int i = 0; i < N; ++i)
	//{
	//	if (i != N - 1)
	//	{
	//		temPoints.Add(LinearBezier(Points[i], Points[i + 1], T));
	//	}
	//}

	//return Nth_orderBezier(temPoints,T);

	// 使用双缓冲策略优化内存分配
	TArray<FVector2D> currentBuffer;
	TArray<FVector2D> nextBuffer;
	currentBuffer.Reserve(N);
	nextBuffer.Reserve(N - 1);

	currentBuffer = Points;

	// 层级迭代代替递归
	for (int32 level = N - 1; level >= 1; --level)
	{
		nextBuffer.Reset(level);
		for (int32 i = 0; i < level; ++i)
		{
			const FVector2D& A = currentBuffer[i];
			const FVector2D& B = currentBuffer[i + 1];
			nextBuffer.Add(LinearBezier(A, B, T));
		}
		currentBuffer = nextBuffer;
	}
	return currentBuffer[0];
}

TArray<FVector2D> UMathsHelper::GenerateBezierCurves(const TArray<FVector2D>& Points, int SegmentNum)
{
	const int segmentNum = FMath::Max(1, SegmentNum);

	TArray<FVector2D> Out;
	for (int j = 0; j < segmentNum; ++j)
	{
		double t = (double)j / (double)segmentNum;

		Out.Add(Nth_orderBezier(Points, t));
	}

	Out.Add(Nth_orderBezier(Points, 1.0));

	return Out;
}

FVector2D UMathsHelper::CatmullRomInterp(const FVector2D& A, const FVector2D& B, const FVector2D& C, const FVector2D& D, double T, double Alpha)
{
	double t = FMath::Clamp(T, 0, 1);
	//double t = T;
	double alpha = FMath::Clamp(Alpha, 0, 1);

	double t0 = 0;
	double t1 = t0 + FMath::Pow(FVector2D::Distance(A, B), alpha);
	double t2 = t1 + FMath::Pow(FVector2D::Distance(B, C), alpha);
	double t3 = t2 + FMath::Pow(FVector2D::Distance(C, D), alpha);

	t = FMath::Lerp(t1, t2, t);
	FVector2D A1 = (t1 - t) / (t1 - t0) * A + (t - t0) / (t1 - t0) * B;
	FVector2D A2 = (t2 - t) / (t2 - t1) * B + (t - t1) / (t2 - t1) * C;
	FVector2D A3 = (t3 - t) / (t3 - t2) * C + (t - t2) / (t3 - t2) * D;
	FVector2D B1 = (t2 - t) / (t2 - t0) * A1 + (t - t0) / (t2 - t0) * A2;
	FVector2D B2 = (t3 - t) / (t3 - t1) * A2 + (t - t1) / (t3 - t1) * A3;

	return (t2 - t) / (t2 - t1) * B1 + (t - t1) / (t2 - t1) * B2;
}

TArray<FVector2D> UMathsHelper::GenerateCatmullRomCurves(const TArray<FVector2D>& Points, int SegmentNum, double Alpha, bool bClosed)
{

	if (Points.Num() < 2)return Points;
	const int segmentNum = FMath::Max(1, SegmentNum);
	TArray<FVector2D> tempInputPoints;
	TArray<FVector2D> Out;

	if (bClosed)
	{
		if (Points.Num() > 2)
		{
			{
				FVector2D pn = Points[Points.Num() - 1];
				FVector2D pn_1 = Points[Points.Num() - 2];
				FVector2D pn_2 = Points[Points.Num() - 3];
				tempInputPoints.Add(pn);
				tempInputPoints.Add(pn_1);
				tempInputPoints.Add(pn_2);
			}
			tempInputPoints.Append(Points);
			{
				FVector2D p0 = Points[0];
				FVector2D p1 = Points[1];
				FVector2D p2 = Points[2];
				tempInputPoints.Add(p0);
				tempInputPoints.Add(p1);
				tempInputPoints.Add(p2);
			}
		}
		else
		{
			return Points;
		}
	}
	else
	{
		// 非闭合曲线：首尾添加虚拟控制点
		{
			// 首部虚拟点：沿P0-P1方向外推
			FVector2D p0 = Points[0];
			FVector2D p1 = Points[1];
			tempInputPoints.Add(FVector2D(p0.X - (p1.X - p0.X), p0.Y - (p1.Y - p0.Y)));
		}
		tempInputPoints.Append(Points);
		// 尾部虚拟点：沿Pn-1-Pn-2方向外推
		{
			FVector2D pn = Points[Points.Num()-1];
			FVector2D pn_1 = Points[Points.Num() - 2];
			tempInputPoints.Add(FVector2D(pn.X + (pn.X - pn_1.X), pn.Y + (pn.Y - pn_1.Y)));
		}
	}


	const int N = tempInputPoints.Num();

	for (int i = 1; i < N - 2; ++i)
	{
		const FVector2D& p0 = tempInputPoints[FMath::Max(0, i - 1)];
		const FVector2D& p1 = tempInputPoints[i];
		const FVector2D& p2 = tempInputPoints[i + 1];
		const FVector2D& p3 = tempInputPoints[FMath::Min(N - 1, i + 2)];

		// Catmull-Rom参数方程
		for (int t = 0; t <= segmentNum; ++t) {
			double u = (double)t / double(segmentNum);
			double u2 = u * u;
			double u3 = u2 * u;

			FVector2D pt;
			pt.X = 0.5 * ((-u3 + 2 * u2 - u) * p0.X + (3 * u3 - 5 * u2 + 2) * p1.X

				+ (-3 * u3 + 4 * u2 + u) * p2.X + (u3 - u2) * p3.X);
			pt.Y = 0.5 * ((-u3 + 2 * u2 - u) * p0.Y + (3 * u3 - 5 * u2 + 2) * p1.Y

				+ (-3 * u3 + 4 * u2 + u) * p2.Y + (u3 - u2) * p3.Y);

			// 避免重复添加连接点
			if (t != 0 || i == 1) Out.Add(pt);
		}
	}

	return Out;
}
