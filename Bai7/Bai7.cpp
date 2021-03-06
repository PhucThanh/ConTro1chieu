// Bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

int main()
{
	PHANSO *a;
	int N;
	printf("Nhap do dai day phan so: ");
	scanf("%d", &N);
	a = (PHANSO*)malloc(N * sizeof(PHANSO));
	nhapDayPhanSo(a, N);
	xuatDayPhanSo(a, N);

	// TONG DAY PHAN SO
	xuatPhanSo(tongDayPhanSo(a, N));

	// TOI GIAN DAY PHAN SO
	printf("Day phan so sau khi toi gian : \n");
	toiGian(a, N);
	xuatDayPhanSo(a, N);

	// SAP XEP DAY PHAN SO
	printf("Day phan so sau sort : \n");
	sortPhanSo(a, N);
	xuatDayPhanSo(a, N);

	// TIM PHAN TU
	int s = searchPhanSo(a, N);
	printf("%d", s);

	free(a);
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
