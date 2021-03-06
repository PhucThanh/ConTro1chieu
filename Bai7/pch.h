// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct PHANSO
{
	int tu, mau;
};

void nhapPhanSo(PHANSO &a);
void xuatPhanSo(PHANSO a);
void nhapDayPhanSo(PHANSO *a, int N);
void xuatDayPhanSo(PHANSO *a, int N);
PHANSO tongPhanSo(PHANSO a, PHANSO b);
PHANSO tongDayPhanSo(PHANSO *a, int N);
int gcd(int a, int b);
void rutGon(PHANSO &a);
void toiGian(PHANSO *a, int N);
void sortPhanSo(PHANSO *a, int N);
void swapPhanSo(PHANSO &a, PHANSO &b);
int soSanh(PHANSO a, PHANSO b);
int searchPhanSo(PHANSO *a, int N);
// TODO: add headers that you want to pre-compile here

#endif //PCH_H
