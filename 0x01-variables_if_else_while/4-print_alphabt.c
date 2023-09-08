#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all the alphabet (in lCase)
 * except "q" and "e".
 *
 * Return: 0 if successful
 */
int main(void)
{
	int iLower = 97;

	while (iLower <= 122)
	{
		if (iLower == 'q' || iLower == 'e')
		{
			iLower++;
			continue;
		}
		putchar(iLower++);
	}
	putchar('\n');

	return (0);
}
