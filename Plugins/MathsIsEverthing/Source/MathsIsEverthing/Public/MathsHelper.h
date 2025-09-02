// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathsHelper.generated.h"

//UFUNCTION(BlueprintPure, Category = "MathsHelper|Geometry")

UCLASS()
class MATHSISEVERTHING_API UMathsHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/*计算点是否在线段上*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool IsPointOnSegment(const FVector2D& A, const FVector2D& B, const FVector2D& P, double Epsilon = 0.00001);

	/*计算两个二维向量是否平行*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool IsParallelVector2D(const FVector2D& A, const FVector2D& B, double Epsilon = 0.00001);

	/*计算两个三维向量是否平行*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool IsParallelVector3D(const FVector& A, const FVector& B, double Epsilon = 0.00001);

	/*计算向量与线段是否相交且返回交点*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool LineSegmentIntersection(const FVector2D& A, const FVector2D& B, const FVector2D& VStart, const FVector2D& VEnd, FVector2D& OutPos, double Epsilon = 0.00001);

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool LineSegmentIntersectionFromVector(const FVector2D& A, const FVector2D& B, const FVector2D& VStart, const FVector2D& VDir, FVector2D& OutPos, double Epsilon = 0.00001);

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool IsPointOnTriangle(const FVector2D& P, const FVector2D& A, const FVector2D& B, const FVector2D& C);

	/*检测点是否在多边形内 采用射线法*/
	static bool IsPointOnPolygon(const TArray<FVector2D>& PolygonPoints, const FVector2D& P, double Epsilon = 0.00001);

	/*多边形进行三角化运算 使用割耳法
	* 返回三角形面索引
	*/
	static TArray<int32> PolygonEarCut(const TArray<FVector2D>& PolygonPoints, const TArray<TArray<FVector2D>>& PolygonHolePoints);

	/*生成正多边形*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static TArray<FVector2D> GenerateRegularPolygon(const FVector2D& Offset, int N, double R);

	/*根据下标生成正多边形指定顶点*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static FVector2D GenerateRegularPolygonBySingle(const FVector2D& Offset, int N, double R, double StartAngle, int Index);

	/*一次贝塞尔曲线单个点插值计算
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static FVector2D LinearBezier(const FVector2D& A, const FVector2D& B, double T = 0.0);

	/*二次贝塞尔曲线单个点插值计算
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static FVector2D QuadraticBezier(const FVector2D& A, const FVector2D& B,const FVector2D& C, double T = 0.0);

	/*三次贝塞尔曲线单个点插值计算
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static FVector2D CubicBezier(const FVector2D& A, const FVector2D& B, const FVector2D& C, const FVector2D& D, double T = 0.0);
	
	/*N阶贝塞尔曲线单个点插值计算
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static FVector2D Nth_orderBezier(const TArray<FVector2D>& Points, double T = 0.0);

	/*贝塞尔曲线生成
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static TArray<FVector2D> GenerateBezierCurves(const TArray<FVector2D>& Points, int SegmentNum = 100);

	/*Catmull-Rom曲线单个点插值计算
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static FVector2D CatmullRomInterp(const FVector2D& A, const FVector2D& B, const FVector2D& C, const FVector2D& D, double T = 0.0, double Alpha = 0.5);

	/*Catmull-Rom曲线生成
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static TArray<FVector2D> GenerateCatmullRomCurves(const TArray<FVector2D>& Points, int SegmentNum = 100, double Alpha = 0.5, bool bClosed = false);

};