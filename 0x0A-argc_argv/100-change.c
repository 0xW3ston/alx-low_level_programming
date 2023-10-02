#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point for the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful
 * 1 if not successful (errored)
*/

int main(int argc, char *argv[])
{
	int units[] = {25, 10, 5, 2, 1};
	int change_num = 0, i = 0;
	int number;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);

	while (number > 0)
	{
		while ((number - units[i]) >= 0)
		{
			number -= units[i];
			change_num++;
		}
		i++;
	}
	printf("%d\n", change_num);
	return (0);
}
