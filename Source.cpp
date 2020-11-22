// Lab_7_2_1.cpp
// < Kolmykova Kateryna >
// Лабораторна робота № 7.2.1)
// Опрацювання багатовимірних масивів ітераційними способами.
// Варіант 12
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** a, const int n, const int Low, const int High);
void Print(int** a, const int k, const int n);
int MaxMin(int** a, const int k, const int n);
int main()
{
	srand((unsigned)time(NULL));
	int Low = -20;
	int High = 20;
	int k;
	cout << "k="; cin >> k;
	int n;
	cout << "n = "; cin >> n;
	int** a = new int* [k];
	for (int i = 0; i < k; i++)
		a[i] = new int[n];
	Create(a, n, Low, High);
	Print(a, k, n);
	cout << "MaxMin=" << MaxMin(a, k, n) << endl;
	for (int i = 0; i < k; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}
void Create(int** a, const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int k, const int n)
{
	cout << endl;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
int MaxMin(int** a, const int k, const int n)
{
	int min, max;
	for (int j = 0; j < n; j++)
	{
	min = a[0][j];
	for (int i = 1; i < k; i++)
	 if (a[i][j] < min)
		min = a[i][j];
	if (j == 0)
		max = min;
	if (min > max)
		max = min;
	}
	
	return max;
}
