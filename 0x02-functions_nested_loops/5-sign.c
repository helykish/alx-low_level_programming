#include "main.h"

/**
 * print_sign - The sign of a number
 * @n: type int integer, can be -ve or +ve
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1 if +, 0 if 0, and -1 if -
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
