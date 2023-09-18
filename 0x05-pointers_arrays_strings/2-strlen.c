/**
 * _strlen - returns the length of a string
 * @s: string parameter
 *
 * Return: Nothing
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
