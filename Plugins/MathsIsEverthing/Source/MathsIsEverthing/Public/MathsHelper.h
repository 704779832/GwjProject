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
	/*������Ƿ����߶���*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool IsPointOnSegment(const FVector2D& A, const FVector2D& B, const FVector2D& P, double Epsilon = 0.00001);

	/*����������ά�����Ƿ�ƽ��*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool IsParallelVector2D(const FVector2D& A, const FVector2D& B, double Epsilon = 0.00001);

	/*����������ά�����Ƿ�ƽ��*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool IsParallelVector3D(const FVector& A, const FVector& B, double Epsilon = 0.00001);

	/*�����������߶��Ƿ��ཻ�ҷ��ؽ���*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool LineSegmentIntersection(const FVector2D& A, const FVector2D& B, const FVector2D& VStart, const FVector2D& VEnd, FVector2D& OutPos, double Epsilon = 0.00001);

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool LineSegmentIntersectionFromVector(const FVector2D& A, const FVector2D& B, const FVector2D& VStart, const FVector2D& VDir, FVector2D& OutPos, double Epsilon = 0.00001);

	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static bool IsPointOnTriangle(const FVector2D& P, const FVector2D& A, const FVector2D& B, const FVector2D& C);

	/*�����Ƿ��ڶ������ �������߷�*/
	static bool IsPointOnPolygon(const TArray<FVector2D>& PolygonPoints, const FVector2D& P, double Epsilon = 0.00001);

	/*����ν������ǻ����� ʹ�ø����
	* ����������������
	*/
	static TArray<int32> PolygonEarCut(const TArray<FVector2D>& PolygonPoints, const TArray<TArray<FVector2D>>& PolygonHolePoints);

	/*�����������*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static TArray<FVector2D> GenerateRegularPolygon(const FVector2D& Offset, int N, double R);

	/*�����±������������ָ������*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry")
	static FVector2D GenerateRegularPolygonBySingle(const FVector2D& Offset, int N, double R, double StartAngle, int Index);

	/*һ�α��������ߵ������ֵ����
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static FVector2D LinearBezier(const FVector2D& A, const FVector2D& B, double T = 0.0);

	/*���α��������ߵ������ֵ����
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static FVector2D QuadraticBezier(const FVector2D& A, const FVector2D& B,const FVector2D& C, double T = 0.0);

	/*���α��������ߵ������ֵ����
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static FVector2D CubicBezier(const FVector2D& A, const FVector2D& B, const FVector2D& C, const FVector2D& D, double T = 0.0);
	
	/*N�ױ��������ߵ������ֵ����
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static FVector2D Nth_orderBezier(const TArray<FVector2D>& Points, double T = 0.0);

	/*��������������
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static TArray<FVector2D> GenerateBezierCurves(const TArray<FVector2D>& Points, int SegmentNum = 100);

	/*Catmull-Rom���ߵ������ֵ����
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static FVector2D CatmullRomInterp(const FVector2D& A, const FVector2D& B, const FVector2D& C, const FVector2D& D, double T = 0.0, double Alpha = 0.5);

	/*Catmull-Rom��������
	*/
	UFUNCTION(BlueprintCallable, Category = "MathsHelper|Geometry|Curves")
	static TArray<FVector2D> GenerateCatmullRomCurves(const TArray<FVector2D>& Points, int SegmentNum = 100, double Alpha = 0.5, bool bClosed = false);

};