#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n amount of elements from an array of integers
 * @a: array pointer
 * @n: number of integers
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while ((*(a + i) != *(a + n)) && n > 0)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", *(a + i));
		i++;
	}
	printf("\n");
}
