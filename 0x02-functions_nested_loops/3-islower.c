#include "main.h"
/**
 * _islower - Tells us if the letter is lowercase or not
 * @c: is the parameter for the character (in int, ASCII)
 *
 * Return: 1 if c is lowercase
 * 1 if c is not lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
