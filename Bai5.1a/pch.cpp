// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"

// In general, ignore this file, but keep it around if you are using pre-compiled headers.

void nhapMang(int *a, int n)
{
	for (int i = 0;i < n;i++) 
	{
		printf("a[%d] = ", i);
		scanf("%d", a+i);
	}
}
void xuatMang(int *a, int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("a[%d] = %d\n",i,*(a+i));
	}
}
bool uoc(int a, int X) 
{
	if (a == 0) 
		return false;
	if (X % a == 0) 
	{
		return true;
	}
	return false;
}
void uocCuaX(int *a, int X,int n) 
{
	for (int i = 0;i < n;i++)
	{
		if (uoc(*(a + i), X))
		{
			printf("a[%d] = %d\n", i, *(a + i));
		}
	}
}

void swap(int *a, int *b) 
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void sortUoc(int *a, int n, int X) 
{
	int j = n - 1;
	for (int i = 0;i < j;i++)
	{
		if (uoc(*(a + i), X))
		{
			while (uoc(*(a + j), X))
			{
				if (j > i)
				{
					j--;
				}
				else
				{
					break;
				}
			}
			swap(a + i, a + j);
		}
	}
}
void sort(int *a, int n,int X)
{
	for (int i = 0;i < n;i++) 
	{
		for (int j = i;j<n;j++) 
		{
			if (!uoc(*(a + i), X) && !uoc(*(a+j),X)) 
			{
				if (*(a + i) > *(a + j))
				{
					swap(a + i, a + j);
				}
			}
		}
	}
}