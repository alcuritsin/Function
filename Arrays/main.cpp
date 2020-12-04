#include <iostream>

using namespace std;

const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int N, int minRand = 0, int maxRend = 100);
void FillRand(double arr[], const int N, int minRand = 0, int maxRend = 100);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int N);
void Print(double arr[], const int N);
void Print(int arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	
	const int N = 5;
	int arr[N];

	FillRand(arr, N);
	Print(arr, N);

	double brr[N];
	FillRand(brr, N);
	Print(brr, N);


	int arr2[ROWS][COLS];

	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);

	cout << "Двумерный массив типа double\n";

	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);



	/*
	const int M = 10;
	int brr[M];

	FillRand(brr, M);
	Print(brr, M);

	const int SIZE_C = 12;
	int crr[SIZE_C];

	FillRand(crr, SIZE_C);
	Print(crr, SIZE_C);
	*/
}

void FillRand(int arr[], const int N, int maxRand, int minRand)
{
	//Заполнение случайными числами
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand()%(maxRand-minRand)+minRand;
	}
}

void FillRand(double arr[], const int N, int maxRand, int minRand)
{
	//Заполнение случайными числами
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = double	(rand() % 10000)/ 100;
		}
	}
}

void Print(int arr[], const int N)
{
	//Вывод на экран
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void Print(double arr[], const int N)
{
	//Вывод на экран
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}
}void Print(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}
}