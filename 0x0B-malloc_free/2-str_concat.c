#include "main.h"

/**
 * str_concat - concatenates of 2 strings
 * @s1: the string
 * @s2: the string
 *
 *
 * Return: PTR to string
*/

char *str_concat(char *s1, char *s2)
{
	int s_s1 = 0, s_s2 = 0, i;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s_s1 = 0; s1[s_s1] != '\0'; s_s1++)
		;
	for (s_s2 = 0; s2[s_s2] != '\0'; s_s2++)
		;


	concat_str = malloc(sizeof(char) * (s_s1 + s_s2 + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat_str[i] = s1[i];
	}
	for (i = 0; i <= s_s2; i++)
	{
		concat_str[s_s1 + i] = s2[i];
	}
	return (concat_str);
}
