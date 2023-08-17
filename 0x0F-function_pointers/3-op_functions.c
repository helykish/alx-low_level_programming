#include "3-calc.h"

/**
 * op_add - calc total of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: total of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calc the difference of integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calc product of integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calc the division integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calc the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
