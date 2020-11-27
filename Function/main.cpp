#include <iostream>

using namespace std;

int sum(int a, int b);
int dif(int a, int b);
int prod(int a, int b);
int division(int a, int b);

void main()
{
	setlocale(LC_ALL, "Russian");

	int c = sum(2, 3);
	cout << "Сумма = " << c << endl;
	cout << "Разность = " << dif(8,3) << endl;
	cout << "Произведение = " << prod(5,3) << endl;
	cout << "Деление = " << division(15,8) << endl;
	
}

int sum(int a, int b)
{
	int c = a + b;
	return c;
}

int dif(int a, int b)
{
	return a - b;
}

int prod(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}