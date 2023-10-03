#include "main.h"

/**
 * argstostr - turns all args to one big string
 * @ac: count of the args
 * @av: array of the passed args
 *
 *
 * Return: Nothing (always)
*/

char *argstostr(int ac, char **av)
{
	int _len(char *str);
	int i, total = 0;
	int j = 0, c = 0;
	char *string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++, total++)
	{
		total = total + _len(av[i]);
	}

	string = malloc(total + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; c++, j++)
		{
			string[c] = av[i][j];
		}

		string[c++] = '\n';
	}

	string[c] = '\0';

	return (string);
}

/**
 * _len - counts length of str and returns int
 * @str: PTR to str
 *
 * Return: Int
*/
int _len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
