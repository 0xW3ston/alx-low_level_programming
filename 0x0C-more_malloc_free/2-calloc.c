#include "main.h"

/**
 * _calloc - acts as a calloc function
 * @nmemb: size of elements
 * @size: size in bytes
 *
 * Return: PTR If successful
 * else NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *_memset(char *s, char b, unsigned int n);
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);


	_memset(mem, 0, size * nmemb);

	return (mem);
}

/**
 * *_memset - copies a byte to memory
 * @str: string memory addr
 * @b: byte (char)
 * @n: size
 * Return: PTR to memory adr
 */
char *_memset(char *str, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		str[i] = b;
	}

	return (str);
}
