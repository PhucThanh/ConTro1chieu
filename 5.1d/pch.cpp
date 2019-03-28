// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
void nhapMang(int *a, int &n,char c)
{
	printf("Nhap kich thuoc mang %c : ",c);
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		printf("%c[%d] = ", c,i);
		scanf("%d", a + i);
	}
}
void xuatMang(int *a, int n, char c)
{
	for (int i = 0;i < n;i++)
	{
		printf("%c[%d] = %d\n", c, i,*(a+i));
	}
}
void onlyA(int *a,int *b,int m,int n) 
{
	bool exist = false;
	for (int i = 0;i < m;i++) 
	{
		exist = false;
		for (int j = 0;j < n;j++) 
		{
			if (*(a + i) == *(b + j))
			{
				exist = true;
			}
		}
		if (exist == false)
		{
			printf("a[%d] = %d\n", i, *(a + i));
		}
	}
	printf("\n");
}

int * ghepMang(int *a, int *b,int m,int n,int &d) 
{
	d = 0;
	int *c = (int*)malloc((m + n) * sizeof(int));
	bool exist = false;
	for (int i = 0;i < m;i++)	// Them a khong trung vao C
	{
		exist = false;
		for (int j = 0;j < n;j++)
		{
			if (*(a + i) == *(b + j))
			{
				exist = true;
			}
		}
		if (exist == false)
		{
			*(c + d) = *(a + i);
			d++;
		}
	}

	for (int i = 0;i < n;i++) // Gan B vao C
	{
		*(c + d) = *(b + i);
		d++;
	}
	return c;
}
// In general, ignore this file, but keep it around if you are using pre-compiled headers.
