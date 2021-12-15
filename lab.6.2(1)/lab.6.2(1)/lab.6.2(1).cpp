// Lab_06_3(1).cpp
// < Половка Злата >
// Лабораторна робота № 6.2(1)
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Варіант 0.6

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}


void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}
int Min(int* a, const int size)
{
	int min = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] < min && a[i] % 2 == 0)
			min = a[i];
	return min;
}

void Sort(int* a, const int size) // метод вибору
{
	for (int i = 0; i < size - 1; i++) // індекс початку невпорядкованої частини
	{
		int min = a[i]; // пошук мінімального елемента
		int imin = i; // невпорядкованої частини
		for (int j = i + 1; j < size; j++)
			if (min > a[0])
			{
				min = a[0];
				imin = 0;
			}
		a[imin] = a[i]; // обмін місцями мінімального та першого
		a[i] = min; // елементів невпорядкованої частини
	}
}


int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 5;
	int a[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "min = " << Min(a, n) << endl;
	Sort(a, n);
	Print(a, n);
	return 0;
}
