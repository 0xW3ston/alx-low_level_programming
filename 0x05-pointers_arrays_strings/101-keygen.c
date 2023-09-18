#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Generates a combination of random valid passwords for 101-crackme
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i, sum, num;
	int passwords[100];

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		passwords[i] = rand() % 78;
		sum = sum + ('0' + passwords[i]);
		putchar('0' + passwords[i]);

		if ((2772 - sum) - 48 < 78)
		{
			num = 2772 - '0' - sum;
			sum = sum + num;
			putchar('0' + num);
			break;
		}
	}
	return (0);
}
