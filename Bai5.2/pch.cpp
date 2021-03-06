// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"

int arr2D_alloc(int **&a, int m, int n) // Ky Thuat Lap Trinh,Tran Dan Thu, DH KHTN trang 91
{
	a = new int*[m];
	int i, Success = 1;
	for (int i = 0;i < m;i++) 
	{
		a[i] = new int[n];
		if (a[i] == NULL) 
		{
			Success = 0;
			printf("THAT BAI");
		}
	}
	return Success;
}

void arr2D_free(int *a[], int m, int n) // Ky Thuat Lap Trinh,Tran Dan Thu, DH KHTN trang 91
{
	int i;
	if (n <= 0 || m <= 0) 
	{
		return;
	}
	for (i = 0;i < m;i++) 
	{
		if (a[i] != NULL) 
		{
			free(a[i]);
			a[i] = NULL;
		}
	}
}
void arr2D_out(int *a[], int m, int n) // Ky Thuat Lap Trinh,Tran Dan Thu, DH KHTN trang 91
{
	int i, j;
	for (int i = 0;i < m;i++) 
	{
		for (int j = 0;j < n;j++) 
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void arr2D_input(int **a, int m, int n) // Ky Thuat Lap Trinh,Tran Dan Thu, DH KHTN trang 91
{
	for (int i = 0;i < m;i++) 
	{
		for (int j = 0;j < n;j++) 
		{
			//scanf("%d", &a[i][j]);
			printf("a[%d][%d] = ",i,j);
			scanf("%d", (*(a+i)+j));
		}
	}
}
int arr2D_sum(int *a[], int m, int n) 
{
	int sum = 0;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (*(*(a + i) + j) > 0) 
			{
				sum += *(*(a + i)+j);
			}
		}
	}
	return sum;
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

int numOfPrime(int **a, int m, int n) 
{
	int num = 0;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (isPrime(*(*(a+i)+j)))
			{
				num++;
			}
		}
	}
	return num;
}
int maxOnEdge(int **a, int m, int n) 
{
	int max=**a;
	for (int i = 0;i < n;i++) 	//First row
	{
		if (*(*(a)+i) > max) 
		{
			max = *(*(a)+i);
		}
	}
	for (int i = 0;i < n;i++) 	//Last row
	{
		if (*(*(a+m-1)+i) > max)
		{
			max = *(*(a+m-1)+i);
		}
	}
	for (int i = 0;i < m;i++) 	//First col
	{
		if (*(*(a+i)) > max)
		{
			max = *(*(a+i));
		}
	}
	for (int i = 0;i < m;i++) 	//last col
	{
		if (*(*(a+i)+n-1) > max)
		{
			max = *(*(a+i)+n-1);
		}
	}
	return max;
}
int minPositive(int **a, int m, int n) 
{
	int min = **a;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (min < 0)	// neu min am tu dong gan
			{
				min = *(*(a + i) + j);
			}
			else
			{
				if (*(*(a + i) + j) < min)
					min = *(*(a + i) + j);
			}
		}
	}
	return min;
}

void rowNegative(int **a, int m, int n) 
{
	bool negative_exist, check = false;
	for (int i = 0;i < m;i++) 
	{
		negative_exist = false;
		for (int j = 0;j < n;j++) 
		{
			if (*(*(a + i) + j) < 0)
			{
				negative_exist = true;	// Co ton tai so am
			}
		}
		if (negative_exist) 
		{
			if (!check)
			{
				printf("Cac dong co chua gia tri am :");
				check = true;
			}
			printf("%d ", i + 1);
		}
	}
	printf("\n");
	if (!check) 
	{
		printf("Khong ton tai dong co chua gia tri am\n");
	}
}
void rowEven(int **a, int m, int n) 
{
	bool even_exist, check = false;
	for (int i = 0;i < m;i++)
	{
		even_exist = false;
		for (int j = 0;j < n;j++)
		{
			if (*(*(a + i) + j) % 2 == 0)
			{
				even_exist = true;	// Co ton tai so chan
			}
		}
		if (even_exist)
		{
			if (!check)
			{
				printf("Cac dong co chua so chan :");
				check = true;
			}
			printf("%d ", i + 1);
		}
	}
	printf("\n");
	if (!check)
	{
		printf("Khong ton tai dong co chua so chan\n");
	}
}
bool maxRow(int **a, int m, int n,int x,int y) // kiem tra vi tri x y trong MT
{
	for (int i = 0;i < n;i++) 
	{
		if (x != i)
		{
			if ((*(*(a + y) + x)) <= (*(*(a + y) + i)))
			{
				return false;
			}
		}
	}
	return true;
}
bool minCol(int **a, int m, int n,int x,int y) 
{
	for (int i = 0;i < m;i++)
	{
		if (y != i)
		{
			if ((*(*(a + y) + x)) <= (*(*(a + i) + x)))
			{
				return false;
			}
		}
	}
	return true;
}
bool maxCol(int **a, int m, int n, int x, int y)
{
	for (int i = 0;i < m;i++)
	{
		if (y != i)
		{
			if ((*(*(a + y) + x)) <= (*(*(a + i) + x)))
			{
				return false;
			}
		}
	}
	return true;
}
bool maxDia(int **a, int m, int n, int x, int y) 
{
	//Duong cheo chinh \ : hieu bang nhau
	int h = y-x;

	//Duong cheo phu / : tong bang nhau
	int t = y + x;

	for (int i = 0;i < m;i++) 
	{
		for (int j = 0;j < n;j++)
		{
			if ((y != i) && (x != j))
			{
				if ((i - j == h) || (i + j == t))
				{

					if ((*(*(a + y) + x)) <= (*(*(a + i) + j)))
					{
						return false;
					}
				}
			}
		}
	}
	return true;
}
int yenNgua(int **a, int m, int n) 
{
	int count = 0;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (maxRow(a, m, n, j, i) && minCol(a, m, n, j, i)) 
			{
				count++;
			}
		}
	}
	return count;
}
int queen(int **a, int m, int n) 
{
	int count = 0;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (maxRow(a, m, n, j, i) && maxCol(a, m, n, j, i) && maxDia(a, m, n, j, i))
			{
				count++;
			}
		}
	}
	return count;
}

bool cucTri(int **a, int m, int n, int x, int y) 
{
	int b = *(*(a + y) + x);
	bool top = false, left = false, bottom=false, right=false; // true : vi tri hop le nam trong MT
	if (y - 1 >= 0) top = true;
	if (y + 1 < m) bottom = true;
	if (x + 1 < n) right = true;
	if (x - 1 >= 0) left = true;
	int c1=0, c2=0; // c1: So luong vi tri trong xung quanh a[y][x]
					//c2 = c1 : cuc tieu. c2=0 : cuc dai
	if (top) 
	{
		c1++;
		if (b <= *(*(a + y - 1) + x))
			c2++;
		if (left)
		{
			c1++;
			if (b <= *(*(a + y - 1) + x - 1))
				c2++;
		}
		if (right) 
		{
			c1++;
			if (b <= *(*(a + y - 1) + x + 1))
				c2++;
		}
	}
	if (bottom)
	{
		c1++;
		if (b <= *(*(a + y + 1) + x))
		{
			c2++;
		}
		if (left)
		{
			c1++;
			if (b <= *(*(a + y + 1) + x - 1)) c2++;
		}
		if (right)
		{
			c1++;
			if (b <= *(*(a + y + 1) + x + 1)) c2++;
		}
	}
	if (left)
	{
		c1++;
		if (b <= *(*(a + y) + x - 1)) c2++;
	}
	if (right)
	{
		c1++;
		if (b <= *(*(a + y) + x + 1)) c2++;
	}
	if ((c1 == c2) || (c2 == 0))
		return true;
	return false;
}
int sumCucTri(int **a, int m, int n) 
{
	int sum = 0;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (cucTri(a, m, n, j, i))
			{
				sum += *(*(a + j) + i);
			}
		}
	}
	return sum;
}

int xuatHien(int **a, int m, int n) 
{
	int current_number = *(*(a));
	int count=0;
	int maxCount = 0;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			count = 1;
			for (int i2 = 0;i2 < m;i2++)
			{
				for (int j2 = 0;j2 < n;j2++)
				{
					if ((i != i2) && (j != j2))
					{
						if (*(*(a + i) + j) == *(*(a + i2) + j2))
							count++;
					}
				}
			}
			if (count >= maxCount) 
			{
				maxCount = count;
				current_number = *(*(a + i) + j);
			}
		}
	}
	return current_number;
}

void swap(int *a, int *b) 
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sortEdge(int **a, int m, int n) 
{
	int *b=(int*)calloc(2*m+2*n-4,sizeof(int));
	int d = 0;
	for (int i = 0;i < n;i++) //first row
	{
		*(b + d) = *(*(a)+i);
		d++;
	}
	for (int i = 1;i < m;i++)	// last col
	{
		*(b + d) = *(*(a+i)+n-1);
		d++;
	}
	for (int i = n-1;i > 0;i--)	// bottom
	{
		*(b + d) = *(*(a + m-1) + i-1);
		d++;
	}
	for (int i = m-1;i > 1;i--)	// last col
	{
		*(b + d) = *(*(a + i-1));
		d++;
	}
	// sort b
	for (int i = 0;i < d;i++) 
	{
		for (int j = i;j < d;j++)
		{
			if (*(b + i) > *(b + j)) 
			{
				swap((b + i), (b + j));
			}
		}
	}
	d = 0;
	for (int i = 0;i < n;i++) //first row
	{
		*(*(a)+i)= *(b + d);
		d++;
	}
	for (int i = 1;i < m;i++)	// last col
	{
		*(*(a + i) + n - 1)= *(b + d);
		d++;
	}
	for (int i = n - 1;i > 0;i--)	// bottom
	{
		*(*(a + m - 1) + i - 1)= *(b + d);
		d++;
	}
	for (int i = m - 1;i > 1;i--)	// last col
	{
		*(*(a + i - 1))= *(b + d);
		d++;
	}

	free(b);
}
// In general, ignore this file, but keep it around if you are using pre-compiled headers.
