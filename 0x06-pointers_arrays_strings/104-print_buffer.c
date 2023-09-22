#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints some buffer
 * @b: Buffer payload
 * @size: size of the buffer
 *
 * Return: Nothing
 */
void print_buffer(char *b, int size)
{
	int i, j, o;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (o < size)
	{
		j = (size - o < 10) ? (size - o) : 10;
		printf("%08x: ", o);

		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", b[o + i]);
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int c = b[o + i];

			if (c > 132 || c < 32)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		o = o + 10;
	}
}
