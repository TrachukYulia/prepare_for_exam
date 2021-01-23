#include "Header.h"
int** create(int n)
{
	srand(time(NULL));
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		   arr[i] = new int [n];
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 3 + 0;
		}
	}
	return arr;
}
int input_s(int &size)
{
	do
	{
		cout << "Enter size " << endl; cin >> size;
	} while (size <= 0);

	return size;
}
void output(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << setw(3)<< arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void new_m(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][i] = 0;
			if (j > i)
			{
				if (arr[i][j] == 2)
					arr[j][i] = 0;
				if (arr[i][j] == 1)
					arr[j][i] = 1;
				if (arr[i][j] == 0)
					arr[j][i] = 2;
			}
		}
	}

}
void perelik(int** arr, int n)
{
	
	for (int i = 0; i < n; i++)
	{
		int p = 0;
		int por = 0;
		for (int j = 0; j < n; j++)
		{
			
			if (i!=j)
			{
				if (arr[i][j] == 2)
		        	p++;
				if (arr[i][j] == 0)
					por++;					
			}
			
		}
		if (p > por)
			cout << i + 1 << endl;
	}
}
void rez(int** arr, int n)
{
	int* B = new int [n];
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
		B[i] = sum;
	}
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << setw (3) <<  B[i] << endl;
	}
}
