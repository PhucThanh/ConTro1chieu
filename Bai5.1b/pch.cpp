// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
void nhapMang(int *a, int &n) 
{
	printf("Nhap kich thuoc mang : ");
	scanf("%d", &n);
	for (int i = 0;i < n;i++) 
	{
		printf("a[%d] = ",i);
		scanf("%d", a + i);
	}
}

bool lastSix(int a) 
{
	if (a % 10 == 6)
		return true;
	return false;
}
bool divSix(int a) 
{
	if (a % 6 == 0)
		return true;
	return false;
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

float averageOfPrimes(int *a, int n) 
{
	int sum = 0;
	int d = 0;
	for (int i = 0;i < n;i++) 
	{
		if (isPrime(*(a + i)))
		{
			sum += *(a + i);
			d++;
		}
	}
	return (float)sum / d;
}

int numOfPrimes(int *a,int n) 
{
	int b[15];
	int d = 0;
	bool check = false; // false = khong ton tai trong b
	for (int i = 0;i < n;i++) 
	{
		if (isPrime(*(a + i))) 
		{
			check = false;
			for (int j = 0;j < d;j++) 
			{
				if (*(a + i) == *(b + j)) 
				{
					check = true;
					break;
				}
			}
			if (!check) 
			{
				*(b + d) = *(a + i);
				d++;
			}
		}
	}
	return d;
}
// In general, ignore this file, but keep it around if you are using pre-compiled headers.
