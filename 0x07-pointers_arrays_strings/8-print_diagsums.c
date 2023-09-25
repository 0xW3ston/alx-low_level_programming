#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonals
 * (both from right-to-left and the opposite)
 * @a: Array
 * @size: size of diagonal/array
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sumF = 0;
	int sumB = 0;

	for (x = 0; x < size; x++)
	{
		sumF += a[x + (size * x)];
		sumB += a[(size - 1) * (x + 1)];
	}

	printf("%d, %d\n", sumF, sumB);
}
