#include "main.h"

/**
 * string_nconcat - concatenates two strings and allocates
 * a place for them.
 * @s1: string 1
 * @s2: string 2
 * @n: Number of bytes to concatenate from string 2
 *
 * Return: PTR If successful
 * Exit: with 98 if not allocated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int _strlen(char *s);
	char *concated_str;
	unsigned int i, j;
	unsigned int s_s1, s_s2;
	char *str1 = s1, *str2 = s2;

	if (s1 == NULL)
		str1 = " ";
	if (s2 == NULL)
		str2 = " ";

	s_s1 = _strlen(s1);
	s_s2 = _strlen(s2);

	concated_str = malloc(sizeof(char) * ((s_s1 + s_s2) + 1));

	if (concated_str == NULL)
		return (NULL);

	for (i = 0; str1[i] != '\0'; i++)
	{
		concated_str[i] = str1[i];
	}
	for (j = 0; str2[j] != '\0' && j < n && j < s_s2; j++)
	{
		concated_str[(i + j)] = str2[j];
	}

	concated_str[i + j] = '\0';


	return (concated_str);
}

/**
 * _strlen - Gives length of a string
 * @s: String
 *
 * Return: Length (positive integer)
*/
unsigned int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
