// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int arr2D_alloc(int **&a, int m, int n);
void arr2D_free(int *a[], int m, int n);
void arr2D_out(int *a[], int m, int n);
void arr2D_input(int *a[], int m, int n);

int arr2D_sum(int *a[],int m, int n);

bool isPrime(int number);
int numOfPrime(int **a, int m, int n);

int maxOnEdge(int **a, int m, int n);
int minPositive(int **a, int m, int n);
void rowNegative(int **a, int m, int n);
void rowEven(int **a, int m, int n);

//Yen ngua
bool maxRow(int **a, int m, int n,int x,int y);
bool minCol(int **a, int m, int n,int x,int y);
bool maxCol(int **a, int m, int n, int x, int y);
bool maxDia(int **a, int m, int n, int x, int y);
int yenNgua(int **a, int m, int n);
int queen(int **a, int m, int n);
bool cucTri(int **a, int m, int n, int x, int y);
int sumCucTri(int **a, int m, int n);
int xuatHien(int **a, int m, int n);
void swap(int *a, int *b);
void sortEdge(int **a, int m, int n);
// TODO: add headers that you want to pre-compile here

#endif //PCH_H
