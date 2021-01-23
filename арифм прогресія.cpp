#include "andrey4.h"
int main()
{
	int d, a1, n;
	input(d, a1, n);
	int** arr= create(d, a1, n);
	output(arr, n);
	sort(arr, n);
	output(arr, n);
	diagonal(arr, n);

}