#include "main.h"

/**
 * infinite_add - adds 2 integers
 * @n1: number 1
 * @n2: number 2
 * @r: result (buffer)
 * @size_r: result_size (buffer_size)
 *
 * Return: PTR
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	void rev_string(char *str);

	int i = 0, j = 0, digits = 0, overflow = 0, v1 = 0, v2 = 0, t_total = 0;

	for (i = 0; n1[i + 1] != '\0'; i++)
		;
	for (j = 0; n2[j + 1] != '\0'; j++)
		;
	if (i >= size_r || j >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || overflow == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = n1[i] - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = n2[j] - '0';

		t_total = v1 + v2 + overflow;

		if (t_total >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		r[digits] = '0' + (t_total % 10);

		digits++;
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	r[digits] = '\0';
	rev_string(r);
	return (r);
}

/**
 * rev_string - reverses an array
 * @str: string Parameter
 *
 * Return: 0 if successful
 */

void rev_string(char *str)
{
	int i;
	int j = 0;
	char t;

	for (i = 0; str[i + 1] != '\0'; i++)
		;

	for (j = 0; j < i; i--, j++)
	{
		t = str[j];
		str[j] = str[i];
		str[i] = t;
	}
}
