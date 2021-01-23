#include "Header.h"
int main()
{
	int n = input(n);
	int** arr = create(n);
	sort_m(arr, n);
	output(arr, n);
	sort_m2(arr, n);
	output(arr, n);
    sort_m3(arr, n);
	output(arr, n);

	return 0;
}
