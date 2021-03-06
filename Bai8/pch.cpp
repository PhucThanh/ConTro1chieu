// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
void nhapDuongTron(circle &a) 
{
	//point o;
	printf("Nhap toa do x y cua duong tron\n");
	printf("x= ");
	scanf("%d", &a.o.x);
	printf("y= ");
	scanf("%d", &a.o.y);
	printf("Nhap ban kinh duong tron :");
	scanf("%d", &a.r);
}
void xuatDuongTron(circle a) 
{
	printf("Toa do (%d,%d), ban kinh %d\n", a.o.x, a.o.y, a.r);
}

double chuVi(circle a) {
	return a.r * 2 * PI;
}
double dienTich(circle a) {
	return a.r * a.r * PI;
}

void tuongQuan(circle a, point O) 
{
	double d = sqrt( pow(a.o.x-O.x,2) + pow(a.o.y - O.y, 2));
	if (d < a.r) 
	{
		printf("Diem nam trong duong tron");
	}
	else
	{
		if (d ==(double)a.r) 
			printf("Diem nam tren duong tron");
		else
			printf("Diem nam ngoai duong tron");
	}
}

void nhapMangDuongTron(circle *&A, int &N) 
{
	printf("Nhap kich thuoc mang : ");
	scanf("%d", &N);
	A = (circle*)malloc(N * sizeof(circle));
	if (A == NULL)
		printf("NOOOOOOOO");
	for (int i = 0;i < N;i++) 
	{
		printf("Nhap du lieu cho duong tron [%d]\n", i);
		nhapDuongTron(*(A + i));
		printf("=============\n");
	}
}
void xuatMangDuongTron(circle *A, int N)
{
	for (int i = 0;i < N;i++)
	{
		printf("Duong tron [%d] : ",i);
		xuatDuongTron(*(A+i));
	}
}
void swap(circle &a, circle &b) 
{
	circle tmp;
	tmp.r = a.r;
	tmp.o.x = a.o.x;
	tmp.o.y = a.o.y;
	a.r = b.r;
	a.o.x = b.o.x;
	a.o.y = b.o.y;
	b.r = tmp.r;
	b.o.x = tmp.o.x;
	b.o.y = tmp.o.y;
}
void sort(circle *A, int N) 
{
	for (int i = 0;i < N;i++) 
	{
		for (int j = i;j < N;j++) 
		{
			if (dienTich(*(A + i)) > dienTich(*(A + j))) 
			{
				swap(*(A + i), *(A + j));
			}
		}
	}
}
// In general, ignore this file, but keep it around if you are using pre-compiled headers.
