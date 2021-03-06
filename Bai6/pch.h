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

void nhapPhanSo(PHANSO *a);
void xuatPhanSo(PHANSO *a);
PHANSO tongPhanSo(PHANSO *a, PHANSO *b);
PHANSO hieuPhanSo(PHANSO *a, PHANSO *b);
PHANSO tichPhanSo(PHANSO *a, PHANSO *b);
PHANSO thuongPhanSo(PHANSO *a, PHANSO *b);
int gcd(int a, int b);
PHANSO rutGon(PHANSO *a);
int soSanh(PHANSO *a, PHANSO *b);
// TODO: add headers that you want to pre-compile here
#endif //PCH_H
