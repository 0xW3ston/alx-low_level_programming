
/**
 * _atoi - parses a string into an integer
 * @s: the string to be parsed
 *
 * Return: int version of the "s"
 */
int _atoi(char *s)
{
	unsigned int numb = 0;
	int i = 1;

	do {
		if (*s == '-')
		{
			i = i * -1;
		}
		else if (*s <= '9' && *s >= '0')
		{
			numb = numb * 10 + (*s - '0');
		}
		else if (numb > 0)
		{
			break;
		}
	} while (*s++);

	return (numb * i);
}
