#include "main.h"
/**
 * _strpbrk - locates the first occurrence in teh string s of
 * any bytes in accept
 * @s: String
 * @accept: Bytes of another string
 *
 * Return: Char byte pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (&s[x]);
			}
		}
	}

	return ((char *) NULL);
}
