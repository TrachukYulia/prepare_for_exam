#include "Header.h"

int input(int& n)
{
	do
	{
		cout << "Enter size " << endl; cin >> n;

	} while (n <= 0);
	return n;
}
int** create(int n)
{
	int p = 1;
	int s = 0;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = s +p;
		        s = p;
			p = arr[i][j];		
		}
	}
	return arr;
}
void output(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			cout << setw(10) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void sort2(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			if (i >j)
				arr[i][j] = arr[j][i];
		}
		
	}
}
void sort(int** arr, int n)
{
	for (int i =1 ; i < n; i++)
	{
		for (int i = 1 ; i < n; i++)
		{
		     if (arr[i][i] > arr[i-1][i -1])
		     {
		    	int temp = arr[i][i];
			    arr[i][i] = arr[i-1][i-1];
			    arr[i-1][i-1] = temp;
		     }
	    }
	}
}
