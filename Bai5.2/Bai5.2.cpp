// Bai5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

int main()
{
	int **a=NULL;
	int m,n;//Mang 2 chieu
	printf("Nhap so cot : ");
	scanf("%d", &n);
	printf("Nhap so dong : ");
	scanf("%d", &m);
	if (n > 0 && arr2D_alloc(a, m, n))	// Ky Thuat Lap Trinh,Tran Dan Thu, DH KHTN trang 91
	{
		arr2D_input(a, m, n);
		printf("-----------\n");
		arr2D_out(a, m, n);
	}
	/*
	printf("Tong cac phan tu duong : %d\n", arr2D_sum(a, m, n));
	printf("So lon nhat tren bien la : %d\n",maxOnEdge(a, m, n));

	// Min ma tran
	int minPos = minPositive(a, m, n);
	if (minPos < 0) 
	{
		printf("Ma tran khong co so duong nho nhat \n");
	}
	else
	{
		printf("So duong nho nhat tren ma tran la %d \n",minPos);
	}

	rowNegative(a, m, n);
	rowEven(a, m, n);
	printf("So phan tu yen ngua : %d \n", yenNgua(a, m, n));
	printf("So phan tu hoang hau : %d \n", queen(a, m, n));
	printf("Tong cuc tri la %d\n",sumCucTri(a, m, n));
	printf("So xuat hien nhieu nhat la %d\n", xuatHien(a, m, n));

	printf("Sap xep bien ma tran tang dan : \n");
	sortEdge(a, m, n);
	arr2D_out(a, m, n);

	arr2D_free(a, m, n);
	*/
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
