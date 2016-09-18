#include <iostream>
using namespace std;
void printArray(int* arr, int size);
void compositionEndSumArray(int* arr, int const* size, int* sum, int* composition);
int main()
{
	int sum = 0;
	int composition = 1;
	int const size{ 10 };
	int arr[size]{ 2,6,4,12,5,7,9,11,3,8 };
	printArray(arr, size);
	compositionEndSumArray(arr, &size, &sum, &composition);
	cout << "sum array = " << sum << endl << "composition array = " << composition << endl;
}

void printArray(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

void compositionEndSumArray(int * arr, int const * size, int * sum, int * composition)
{
	for (int i = 0; i < *size; i++)
	{
		*sum += *(arr + i);
		*composition *= *(arr + i);
	}
}







/*Написать функцию, которая получает указатель на массив и его размер,
и возвращает сумму и произведение его элементов в двух параметрах-указателях.*/
