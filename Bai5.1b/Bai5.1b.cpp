// Bai5.1b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"


int main()
{
	int a[15];
	int n;
	nhapMang(a, n);

	int last6 = 0, div6 = 0;
	for (int i = 0;i < n;i++) 
	{
		if( lastSix(*(a+i)))
			last6++;
		if (divSix(*(a + i)))
			div6++;
	}
	printf("So phan tu tan cung la 6 : %d\n",last6);
	printf("So phan tu chia het cho 6 : %d\n", div6);

	printf("Trung binh cong cac so nguyen to trong mang : %f\n",averageOfPrimes(a,n));
	printf("So luong so nguyen to phan biet : %d\n", numOfPrimes(a, n));
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
