// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
void nhapMang(int *a, int &n)
{
	printf("Nhap kich thuoc mang : ");
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", a + i);
	}
}

bool isPrime(int number) {	// Nguon :	stackoverflow.com/questions/33714843/c-how-to-use-a-function-returning-a-boolean-value-to-determine-prime-numbers
	if (number == 0) return false;
	for (int j = 2; j < number / 2; ++j)
	{
		if (number % j == 0)
		{
			return false;
		}
	}
	return true;
}

int primeExtract(int *a,int *b,int &n) 
{
	int j = 0;
	for (int i = 0;i < n;i++) 
	{
		if (!(isPrime(*(a + i))))
		{
			*(b + j) = *(a + i);
			j++;
		}
		else
		{
			//Xoa a
			for (int k = i;k < n-1;k++) 
			{
				*(a + k) = *(a + k + 1);
			}
			n--;
			i--;
		}
	}
	return j;
}

void xuatMang(int *b, int n,char c) 
{
	for (int i = 0;i < n;i++) 
	{
		printf("%c[%d] = %d\n",c, i, *(b + i));
	}
}

void swap(int *x, int*y) 
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void sort(int *a, int n) 
{
	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			if (*(a + i) < *(a + j)) 
			{
				swap(a + i, a + j);
			}
		}
	}
}
// In general, ignore this file, but keep it around if you are using pre-compiled headers.
