#include "andrey.h"

int main()
{
	int n;
	n = input_s(n);
	int ** arr = create(n);
	output(arr, n);
	new_m(arr, n);
	output(arr, n);
	perelik(arr, n);
	rez(arr, n);
	return 0;
	
}
