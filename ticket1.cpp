#include "Header.h"
int input(int &n)
{
	do
	{
		cout << "enter size " << endl; cin >> n;
	} while (n <= 0);
	return n;
}
int* create(int n)
{
	srand(time(NULL));
	int* B = new int[n];
	for (int i = 0; i < n; i++)
		B[i] = rand() % 20 + 2;
	return B;
}
void output(int* B, int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(5) << B[i];
	cout << endl;
}
int** create1(int* B, int n)
{
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	    for (int j = 0 ; j < n; j++)
		{
			arr[i][j] = pow(B[j], (i+1));
		}
	}
	return arr;
}
void output2(int** arr, int n)
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
void create2(int** arr, int n)
{
	
	for (int i = 0; i < n; i++)
	{
	
		for (int j = 0; j < i; j++)
		{
			int tmp = arr[j][i];
			arr[j][i] = arr[i][j];
			arr[i][j] = tmp;
		}
	}
}
