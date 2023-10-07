#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: len of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _is_dig - sees if digit or not
 * @s: string
 *
 * Return: 1 if is number (successful)
 * 0 if not number (not successful)
 */

int _is_dig(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - multiplies two integers
 * @argc: number of argums
 * @argv: array of argums
 *
 * Return:always 0 ( if successful)
 */
int main(int argc, char **argv)
{
	void compare_then_exit(int argc, char *s1, char *s2);
	char *str1, *str2;
	int s_len1, s_len2, total_size, i, carry, num1, num2, *res, a = 0;

	str1 = argv[1], str2 = argv[2];
	compare_then_exit(argc, str1, str2);
	s_len1 = _strlen(str1);
	s_len2 = _strlen(str2);
	total_size = s_len1 + s_len2 + 1;
	res = malloc(sizeof(int) * total_size);
	if (res == NULL)
		return (1);
	for (i = 0; i <= s_len1 + s_len2; i++)
		res[i] = 0;
	for (s_len1 = s_len1 - 1; s_len1 >= 0; s_len1--)
	{
		num1 = str1[s_len1] - '0';
		carry = 0;
		for (s_len2 = _strlen(str2) - 1; s_len2 >= 0; s_len2--)
		{
			num2 = str2[s_len2] - '0';
			carry += res[s_len1 + s_len2 + 1] + (num1 * num2);
			res[s_len1 + s_len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[s_len1 + s_len2 + 1] += carry;
	}
	for (i = 0; i < total_size - 1; i++)
	{
		if (res[i] != 0)
			a = 1;
		if (a)
			_putchar(res[i] + 48);
	}
	if (!a)
		_putchar(48);
	_putchar('\n');
	free(res);
	return (0);
}

/**
 * compare_then_exit - sees if everything is alright
 * then exits if there's an issue
 * @argc: count of argv arguments
 * @s1: string 1
 * @s2: string 2
 * Exit: 98
 * Return: Nothing
*/
void compare_then_exit(int argc, char *s1, char *s2)
{
	if (argc != 3 || !_is_dig(s1) || !_is_dig(s2))
	{
		printf("Error\n");
		exit(98);
	}
}
