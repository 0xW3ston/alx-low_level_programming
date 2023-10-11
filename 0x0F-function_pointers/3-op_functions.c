#include "3-calc.h"
/**
 * op_add - adds two integers
 * @a: 1st num
 * @b: 2nd num
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts b from a.
 * @a: 1st num
 * @b: 2nd num
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies a by b
 * @a: 1st num
 * @b: 2nd num
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - devide a by b
 * @a: 1st num
 * @b: 2nd num
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - give remainder of deviding a by b
 * @a: 1st num
 * @b: 2nd num
 * Return: The remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
