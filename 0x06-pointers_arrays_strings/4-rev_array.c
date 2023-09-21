#include "main.h"
/**
 * reverse_array - reverse a table of ints
 * @a: PTR of array
 * @n: N elements in array
 */

void reverse_array(int *a, int n)
{
	int iF, iB;

	for (iF = 0, iB = (n - 1); iF < iB; iB--, iF++)
	{
		int elem = a[iF];

		a[iF] = a[iB];
		a[iB] = elem;
	}
}

