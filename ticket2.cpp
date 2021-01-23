#include "Header.h"

void input(int& d, int& a1, int& n)
{
	do
	{
		cout << "enter d, à1, n: " << endl; cin >> d >> a1 >> n;
	} while (n <= 0);
}
int** create(int d, int a1, int n)
{
	int k = 1;
	int** arr = new int * [n];
	for (int i=0; i <n; i ++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = a1 + d * (k - 1);
			k++;
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
			cout << setw(5) << arr[i][j];			
		}
		cout << endl;
	}
	cout << endl;
}
void sort(int** arr, int n)// çåðêàëüíî â³äíîñíî ïîá³÷íî¿
{
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			arr[n - j - 1][n - 1 - i] = arr[i][j];
			
		}
	}
}
void diagonal(int** arr, int n)
{
	for (int i = 0; i<n; i++)
	  cout << setw(5) << arr[i][i];
}
