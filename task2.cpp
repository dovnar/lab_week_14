#include <iostream>
using namespace std;
int distributesArray(int* arr, int const* size);
void printArray(int* arr, int size);
int main()
{
	int const size{ 20 };
	int arr[size]{ -12,0,-1,15,0,16,-5,-4,3,0,5,-15,0,2,0,-2,-8,8,4,0 };
	printArray(arr, size);
	*arr = distributesArray(arr, &size);
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			cout << "count plus number = " << arr[i] << endl;
		}
		else if (i == 1)
		{
			cout << "count minus number = " << arr[i] << endl;
		}
		else
		{
			cout << "count null number = " << arr[i] << endl;
		}
	}
}

int distributesArray(int * arr, int const* size)
{
	int countNull = 0;
	int countPlus = 0;
	int countMinus = 0;
	for (int i = 0; i < *size; i++)
	{
		if (*(arr + i) > 0)
		{
			countPlus++;
		}
		else if (*(arr + i) < 0)
		{
			countMinus++;
		}
		else
		{
			countNull++;
		}
	}
	*arr = countPlus;
	*(arr + 1) = countMinus;
	*(arr + 2) = countNull;
	return *arr;
}

void printArray(int * arr, int size)
{
	
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}











/*Написать функцию, которая получает указатель на массив и его размер, 
и возвращает количество отрицательных, положительных и нулевых элементов массива.*/