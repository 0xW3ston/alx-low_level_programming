#include "main.h"


/**
 * is_palindrome - checks if palindrome or not
 * @s: string
 *
 * Return: 1 if palindrome.
 * 0 if not.
 */

int is_palindrome(char *s)
{
	int palindrom_check(char *str, int i, int length);
	int _strlen_rec(char *str);

	if (*s == 0)
	{
		return (1);
	}
	return (palindrom_check(s, 0, _strlen_rec(s)));
}

/**
 * palindrom_check - checks the characters recursively for palindrome
 * @str: string to check
 * @length: length of the str
 * @i: iterator
 *
 * Return: 1 if palindrome.
 * 0 if not palindrome
 */

int palindrom_check(char *str, int i, int length)
{

	int result;

	if (str[i] != str[length - 1])
	{
		return (0);
	}
	if (length <= i)
	{
		return (1);
	}
	result = palindrom_check(str, i + 1, length - 1);

	return (result);
}

/**
 * _strlen_rec - returns the length of a string
 * @str: gives out length of str
 *
 * Return: length of str
 */
int _strlen_rec(char *str)
{
	return ((*str == '\0') ? 0 : (_strlen_rec(str + 1) + 1));
}
