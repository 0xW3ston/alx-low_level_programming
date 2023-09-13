#include <stdio.h>
/**
 * main - it's supposed to print the very first 98 fibonacci numbers.
 *
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long int iSection = 1;
	unsigned long int nLong = 1000000000;
	unsigned long int iFibStr = 1, iFibFnsh = 2;
	unsigned long int iFStr1, iFStr2, iFFnsh1, iFFnsh2;

	printf("%lu", iFibStr);
	while (iSection < 91)
	{
		printf(", %lu", iFibFnsh);
		iFibFnsh = iFibFnsh + iFibStr;
		iFibStr = iFibFnsh - iFibStr;
		iSection++;
	}

	iFStr1 = (iFibStr / nLong);
	iFStr2 = (iFibStr % nLong);
	iFFnsh1 = (iFibFnsh / nLong);
	iFFnsh2 = (iFibFnsh % nLong);

	while (iSection < 99)
	{
		iSection++;
		printf(", %lu", iFFnsh1 + (iFFnsh2 / nLong));
		printf("%lu", iFFnsh2 % nLong);
		iFFnsh1 = iFFnsh1 + iFStr1;
		iFStr1 = iFFnsh1 - iFStr1;
		iFFnsh2 = iFFnsh2 + iFStr2;
		iFStr2 = iFFnsh2 - iFStr2;
	}
	putchar('\n');

	return (0);
}
