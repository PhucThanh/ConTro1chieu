// Bai5.1a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#define MAX 10000

int main()
{
	int a[MAX], X,n;
	printf("Nhap so luong phan tu mang a : ");
	scanf("%d", &n);
	nhapMang(a,n);
	printf("Nhap X : ");
	scanf("%d", &X);

	printf("Nhung phan tu la uoc cua X :\n");
	uocCuaX(a, X, n);
	printf("\n");

	sortUoc(a, n, X);
	sort(a, n, X);
	xuatMang(a, n);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
