// Bai5.1c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

int main()
{
	int a[1000],n1,b[1000],n2;
	nhapMang(a, n1);
	n2 = primeExtract(a, b, n1);
	printf("Mang b khong co so nguyen to: \n");
	xuatMang(b, n2,'b');
	sort(b, n2);
	printf("Mang b sau khi sort: \n");
	xuatMang(b, n2,'b');
	printf("Mang a sau khi xoa so nguyen to : \n");
	xuatMang(a, n1,'a');
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
