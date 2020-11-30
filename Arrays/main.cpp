#include <iostream>

using namespace std;

void FillRand(int arr[], const int N, int minRand = 0, int maxRend = 100);
void Print(int arr[], const int N);

void main()
{
	setlocale(LC_ALL, "Russian");
	
	const int N = 5;
	int arr[N];

	FillRand(arr, N, 1000,2000);
	Print(arr, N);

	const int M = 10;
	int brr[M];

	FillRand(brr, M);
	Print(brr, M);

	const int SIZE_C = 12;
	int crr[SIZE_C];

	FillRand(crr, SIZE_C);
	Print(crr, SIZE_C);
}

void FillRand(int arr[], const int N, int maxRand, int minRand)
{
	//Заполнение случайными числами
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand()%(maxRand-minRand)+minRand;
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