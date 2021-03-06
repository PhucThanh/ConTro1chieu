// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"

// In general, ignore this file, but keep it around if you are using pre-compiled headers.

void nhapPhanSo(PHANSO *a)
{
	printf("Nhap tu: ");
	scanf("%d", &a->tu);
	printf("Nhap mau: ");
	scanf("%d", &a->mau);
	while (a->mau == 0) 
	{
		printf("Mau phai khac 0, moi nhap lai ");
		scanf("%d", &a->mau);
	}
}

void xuatPhanSo(PHANSO *a) 
{
	printf("%d/%d\n", a->tu, a->mau);
}

PHANSO tongPhanSo(PHANSO *a, PHANSO *b) 
{
	PHANSO x,y;
	x.tu = a->tu * b->mau;
	x.mau = a->mau * b->mau ;
	y.tu = b->tu * a->mau;
	y.mau = b->mau * a->mau;
	PHANSO t;
	t.tu = x.tu + y.tu;
	t.mau = x.mau;
	return t;
}

PHANSO hieuPhanSo(PHANSO *a, PHANSO *b)
{
	PHANSO x, y;
	x.tu = a->tu * b->mau;
	x.mau = a->mau * b->mau;
	y.tu = b->tu * a->mau;
	y.mau = b->mau * a->mau;
	PHANSO t;
	t.tu = x.tu - y.tu;
	t.mau = x.mau;
	return t;
}

PHANSO tichPhanSo(PHANSO *a, PHANSO *b)
{
	PHANSO t;
	t.tu = a->tu * b->tu;
	t.mau = a->mau * b->mau;
	return t;
}

PHANSO thuongPhanSo(PHANSO *a, PHANSO *b)
{
	PHANSO t;
	t.tu = a->tu * b->mau;
	t.mau = a->mau * b->tu;
	return t;
}

int gcd(int a, int b) {	//https://nguyenvanhieu.vn/thuat-toan-tim-uoc-chung-lon-nhat/
	if (a == 0 || b == 0) {
		return a + b;
	}
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}


PHANSO rutGon(PHANSO *a) 
{
	int ucln = gcd(a->tu, a->mau);
	PHANSO t;
	a->tu /= ucln;
	a->mau /= ucln;
	return *a;
}

int soSanh(PHANSO *a, PHANSO *b) 
{
	PHANSO x, y;
	x.tu = a->tu * b->mau;
	x.mau = a->mau * b->mau;
	y.tu = b->tu * a->mau;
	y.mau = b->mau * a->mau;

	if (x.mau < 0) x.tu *= -1;
	if (y.mau < 0) y.tu *= -1;
	if (x.tu > y.tu) 
	{
		return 1;
	}
	else
	{
		if (x.tu < y.tu)
		{
			return -1;
		}
		else
			return 0;
	}
}