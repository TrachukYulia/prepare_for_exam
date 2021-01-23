#include "andrey6.h"
int main()
{
	int n = input(n);
	int *B = create(n);
	output(B, n);
	int** arr = create1(B, n);
	output2(arr, n);
	create2(arr, n);
	output2(arr, n);
	return 0;
}