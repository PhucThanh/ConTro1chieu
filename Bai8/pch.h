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
#include <math.h>
#define PI 3.14
struct point {
	int x, y;
};
struct circle {
	point o;
	int r;
};

void nhapDuongTron(circle &a);
void xuatDuongTron(circle a);
double chuVi(circle a);
double dienTich(circle a);
void tuongQuan(circle a, point O);
void nhapMangDuongTron(circle *&A, int &N);
void xuatMangDuongTron(circle *A, int N);
void sort(circle *A,int N);
void swap(circle &a, circle &b);
// TODO: add headers that you want to pre-compile here

#endif //PCH_H
