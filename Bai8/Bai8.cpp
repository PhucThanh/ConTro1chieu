// Bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

int main()
{
	//circle a;
	//nhapDuongTron(a);
	//xuatDuongTron(a);

	circle *A=NULL;
	int N;

	//printf("Chu vi la %f\n", chuVi(a));
	//printf("Dien tich la %f\n", dienTich(a));

	/*		SU TUONG QUAN
	point O;
	printf("Nhap toa do diem O \n");
	printf("x=");
	scanf("%d", &O.x);
	printf("y=");
	scanf("%d", &O.y);
	tuongQuan(a, O);
	*/

	nhapMangDuongTron(A, N);
	xuatMangDuongTron(A, N);
	// Sap xep theo dien tich
	sort(A, N);
	xuatMangDuongTron(A, N);

	free(A);
}