// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
void nhapPhanSo(PHANSO &a)
{
	printf("\tNhap tu: ");
	scanf("%d", &a.tu);
	printf("\tNhap mau: ");
	scanf("%d", &a.mau);
	while (a.mau == 0)
	{
		printf("Mau phai khac 0, moi nhap lai ");
		scanf("%d", &a.mau);
	}
}
void nhapDayPhanSo(PHANSO *a,int N) 
{
	for (int i = 0;i < N;i++) 
	{
		printf("Nhap du lieu cho phan so [%d]: \n",i);
		nhapPhanSo(*(a + i));
	}
}
void xuatDayPhanSo(PHANSO *a, int N) 
{
	for (int i = 0;i < N;i++)
	{
		printf("a[%d] = ", i);
		xuatPhanSo(*(a + i));
	}
}

void xuatPhanSo(PHANSO a)
{
	printf("%d/%d\n", a.tu, a.mau);
}

int gcd(int a, int b) {	//https://nguyenvanhieu.vn/thuat-toan-tim-uoc-chung-lon-nhat/
	a = abs(a);
	b = abs(b);
	if (a == 0 || b == 0)
		return a + b;
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
void rutGon(PHANSO &a)
{
	int ucln = gcd(a.tu, a.mau);
	a.tu /= ucln;
	a.mau /= ucln;
	if (a.mau < 0) 
	{
		a.mau *= -1;
		a.tu *= -1;
	}
}

void toiGian(PHANSO *a, int N) 
{
	for (int i = 0;i < N;i++) 
	{
		rutGon(*(a + i));
	}
}

PHANSO tongDayPhanSo(PHANSO *a, int N) 
{
	PHANSO sum;
	sum.tu = (*a).tu;
	sum.mau = (*a).mau;
	for (int i = 1;i < N;i++) 
	{
		sum = tongPhanSo(sum, *(a + i));
	}
	return sum;
}

PHANSO tongPhanSo(PHANSO a, PHANSO b)
{
	PHANSO t;
	t.tu = a.tu*b.mau + b.tu*a.mau;
	t.mau = a.mau*b.mau;
	return t;
}
void swapPhanSo(PHANSO &a, PHANSO &b) 
{
	int tmp = a.tu;
	a.tu = b.tu;
	b.tu = tmp;

	tmp = a.mau;
	a.mau = b.mau;
	b.mau = tmp;
}

int soSanh(PHANSO a, PHANSO b)
{
	a.tu *= b.mau;
	b.tu *= a.mau;

	if (a.mau < 0) a.tu *= -1;
	if (b.mau < 0) b.tu *= -1;
	if (a.tu > b.tu)
	{
		return 1;
	}
	else
	{
		if (a.tu < b.tu)
		{
			return -1;
		}
		else
			return 0;
	}
}

void sortPhanSo(PHANSO *a, int N) 
{
	for (int i = 0;i < N;i++) 
	{
		for (int j = i;j < N;j++) 
		{
			if (soSanh(*(a + i), *(a + j))==1) 
			{
				swapPhanSo(*(a + i), *(a + j));
			}
		}
	}
}
int searchPhanSo(PHANSO *a, int N) 
{
	printf("Nhap phan so can tim \n");
	PHANSO b;
	nhapPhanSo(b);
	for (int i = 0;i < N;i++) 
	{
		if (soSanh(*(a + i), b) == 0) 
		{
			return 1;
		}
	}
	return 0;
}
// In general, ignore this file, but keep it around if you are using pre-compiled headers.
