/*
TODO:
� ������ Functions\������� ������� :
? ? ? Sum(? ? ? );	//���������� ����� ��������� �������
? ? ? Avg(? ? ? );	//���������� ������� �������������� ��������� �������
? ? ? minValueIn(? ? ? );	//���������� ����������� �������� �� �������
? ? ? minValueIn(? ? ? );	//���������� ������������ �������� �� �������
? ? ? Sort(? ? ? );	//��������� ������ � ������� �����������
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

	cout << "��������� ���������." << endl;
	PrintArr(arr, N);
	cout << endl;

	// Sum() - ���������� ����� ��������� �������
	cout << "����� ���� ��������� �������:           " << SummArray(arr, N);
	cout << endl;

	// Avg() - ���������� ������� �������������� ��������� �������
	cout << "�������������������� ��������� �������: " << AvgInArray(arr, N);
	cout << endl;

	//minValueIn() - ���������� ����������� �������� �� �������
	cout << "����������� �������� � �������:         " << minValueInArray(arr, N);
	cout << endl;
	
	//maxValueIn() - ���������� ������������ �������� �� �������
	cout << "������������ �������� � �������:        " << maxValueInArray(arr, N);
	cout << endl;
	cout << endl;

	//Sort() - ��������� ������ � ������� �����������
	
	SortArray(arr, N);
	cout << "��������������� ������ �� �����������." << endl;
	PrintArr(arr, N);

	cout << endl;
	cout << "��������� ���������...";
	SayGoodBye();
}

void SayHello()
{
	cout << endl;
	cout << "\t ======+=========+=========+=========+=========+====== \n";
	cout << "\t|  HW ������: 30.11.2020                              |\n";
	cout << "\t|       ����: �������.                                |\n";
	cout << "\t|                                                     |\n";
	cout << "\t|                   ���������.                        |\n";
	cout << "\t|  ���������� ������� � ����������� �������.          |\n";
	cout << "\t|                                                     |\n";
	cout << "\t ======+=========+=========+=========+=========+====== \n";
	cout << endl;
}

void FillRand(int arr[], const int N, int minRand, int maxRand)
{	//���������� ������� ���������� ������� �� ���������
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
{	//����� �������
	cout << "���������� ������ �� " << N << " �������(-��, -�).";
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}

int SummArray(int arr[], const int N)
{	//����� ��������� �������
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
{	//����������� �������� � �������
	int min = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

int maxValueInArray(int arr[], const int N)
{	//������������ �������� � �������
	int max = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

void SortArray(int arr[], const int N, bool Up)
{ //���������� �������
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (Up) //�� �����������
			{
				if (arr[i] > arr[j])
				{
					arr[i] ^= arr[j];
					arr[j] ^= arr[i];
					arr[i] ^= arr[j];
				}
			}
			else //�� ��������
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
	cout << "\t|                   �� ����� ������!                  |\n";
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
//�����������
/*
-----------------------------------------------------
|													|
|            "������������ �������� ���"            |
|      ����: ��011                                  |
|   �������: ������ ���������������� �� ����� C++   |
|                                                   |
|	  �����������: ������� �������					|
|	�������������: ������ ����						|
|                                                   |
|                ������������ - 2020                |	      
|                                                   |
-----------------------------------------------------
*/