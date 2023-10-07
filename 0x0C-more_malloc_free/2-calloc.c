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
	void *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(sizeof(int) * nmemb);

	if (mem == NULL)
		return (NULL);


	for (i = 0; i < nmemb; i++)
	{
		*(((char *)mem) + i) = 0;
	}

	return (mem);
}
