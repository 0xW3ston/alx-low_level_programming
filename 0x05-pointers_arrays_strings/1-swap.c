/**
 * swap_int - swaps the values of two integers using their
 * addresses.
 * @a: Integer 1
 * @b: Integer 2
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
