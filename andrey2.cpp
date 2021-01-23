#include "andrey2.h"

int** create(int n)
{
	srand(time(NULL));
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand()%1;
		}
	}
	return arr;
}
int input(int& size)
{
	do

	{
		cout << "Enter size " << endl; cin >> size;

	} while (size <= 0);
	return size;
}

void output(int **arr, int n)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void sort_m(int** arr, int n )//піфагорa
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <n; j++)
		{
			arr[i][j] = (i+1) * (j+1);	 		
		}
	}
}
void sort_m2(int** arr, int n)// зеркально відносно побічної
{
	for (int i = n-1; i >=0; i--)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			arr[n-j-1][n-1-i] = arr[i][j];
		}
	}
}
void sort_m3(int** arr, int n)//побічну у зростанні/спаданні
{
	{
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if (arr[j][n - j - 1] <  arr[i][n-i-1])
				{
					int temp = arr[j][n - j - 1];
					arr[j][n - j - 1] = arr[i][n - i-1];
					arr[i][n - 1 - i] = temp;
				}
			}
		}
	}
}