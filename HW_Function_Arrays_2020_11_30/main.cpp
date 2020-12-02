/*
TODO:
В проект Functions\обавить функции :
? ? ? Sum(? ? ? );	//возвращает сумму элементов массива
? ? ? Avg(? ? ? );	//возвращает среднее арифметическое элементов массива
? ? ? minValueIn(? ? ? );	//возвращает минимальное значение из массива
? ? ? minValueIn(? ? ? );	//возвращает максимальное значение из массива
? ? ? Sort(? ? ? );	//Сортирует массив в порядке возрастания
*/

#include <iostream>

using namespace std;

//Function prototipe
void SayHello();
void FillRand(int arr[], const int N, int minRand = 0, int maxRand = 10);
void PrintArr(int arr[], const int N);
int SummArray(int arr[], const int N);
double AvgInArray(int arr[], const int N);
int minValueInArray(int arr[], const int N);
int maxValueInArray(int arr[], const int N);
void SortArray(int arr[], const int N, bool Up = true);
void SayGoodBye();

int NewSumm(int arr[], const int N);

void main()
{
	setlocale(LC_ALL, "Russian");
	SayHello();

	const int N = 5;
	int arr[N]{};

	FillRand(arr, N);

	cout << "Результат генерации." << endl;
	PrintArr(arr, N);
	cout << endl;

	// Sum() - возвращает сумму элементов массива
	cout << "Сумма всех элементов массива:           " << SummArray(arr, N);
	cout << endl;

	// Avg() - возвращает среднее арифметическое элементов массива
	cout << "Среднеарифметическое элементов массива: " << AvgInArray(arr, N);
	cout << endl;

	//minValueIn() - возвращает минимальное значение из массива
	cout << "Минимальное значение в массиве:         " << minValueInArray(arr, N);
	cout << endl;
	
	//maxValueIn() - возвращает максимальное значение из массива
	cout << "Максимальное значение в массиве:        " << maxValueInArray(arr, N);
	cout << endl;
	cout << endl;

	//Sort() - Сортирует массив в порядке возрастания
	
	SortArray(arr, N);
	cout << "Отсортированный массив по возростанию." << endl;
	PrintArr(arr, N);

	cout << endl;
	cout << "Программа завершена...";
	SayGoodBye();
}

void SayHello()
{
	cout << endl;
	cout << "\t ======+=========+=========+=========+=========+====== \n";
	cout << "\t|  HW Выдано: 30.11.2020                              |\n";
	cout << "\t|       Тема: Функции.                                |\n";
	cout << "\t|                                                     |\n";
	cout << "\t|                   Программа.                        |\n";
	cout << "\t|  Применение функций к одномерному массиву.          |\n";
	cout << "\t|                                                     |\n";
	cout << "\t ======+=========+=========+=========+=========+====== \n";
	cout << endl;
}

void FillRand(int arr[], const int N, int minRand, int maxRand)
{	//Заполнение массива случайными числами из диапазона
	if (minRand > maxRand)
	{
		int bufer = minRand;
		minRand = maxRand;
		maxRand = bufer;
	}
	
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void PrintArr(int arr[], const int N)
{	//Вывод массива
	cout << "Одномерный массив из " << N << " элемент(-ов, -а).";
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}

int SummArray(int arr[], const int N)
{	//Сумма элементов массива
	int Summ = 0;
	for (int i = 0; i < N; i++)
	{
		Summ += arr[i];
	}
	return Summ;
}

double AvgInArray(int arr[], const int N)
{
	//double Avg = (double)SummArray(arr, N) / N;
	//return Avg;
	return (double)SummArray(arr, N) / N;
}

int minValueInArray(int arr[], const int N)
{	//Минимальное значение в массиве
	int min = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

int maxValueInArray(int arr[], const int N)
{	//Максимальное значение в массиве
	int max = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

void SortArray(int arr[], const int N, bool Up)
{ //Сортировка массива
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (Up) //По возрастанию
			{
				if (arr[i] > arr[j])
				{
					arr[i] ^= arr[j];
					arr[j] ^= arr[i];
					arr[i] ^= arr[j];
				}
			}
			else //По убыванию
			{
				if (arr[i] < arr[j])
				{
					arr[i] ^= arr[j];
					arr[j] ^= arr[i];
					arr[i] ^= arr[j];
				}

			}
		}
	}
}

void SayGoodBye()
{
	cout << endl;
	cout << "\t ======+=========+=========+=========+=========+====== \n";
	cout << "\t|                                                     |\n";
	cout << "\t|                   До новых встреч!                  |\n";
	cout << "\t|                                                     |\n";
	cout << "\t ======+=========+=========+=========+=========+====== \n";
	cout << endl;
}

int NewSumm(int arr[], const int N)
{
	int summ = arr[0];
	for (int i = 1; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
//Исполнитель
/*
-----------------------------------------------------
|													|
|            "Компьютерная академия ШАГ"            |
|      Курс: БД011                                  |
|   Предмет: Основы программирования на языке C++   |
|                                                   |
|	  Исполнитель: Курицын Алексей					|
|	Преподаватель: Ковтун Олег						|
|                                                   |
|                Екатеринбург - 2020                |	      
|                                                   |
-----------------------------------------------------
*/