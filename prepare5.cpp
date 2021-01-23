#include "andrey5.h"
int main()
{
	int n = input(n);
	int** arr = create(n);
	output(arr, n);
	sort(arr, n);
	output(arr, n);
	sort2(arr, n);
	output(arr, n);
}