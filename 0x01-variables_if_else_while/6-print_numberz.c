#include <stdio.h>

/**
 * main - The main block
 * Description: Print all numbers of base 10, starting from 0.
 * Don't  use any variable of type char.
 * Use only `putchar` to print to console.
 * Use only `putchar` twice.
 * Return: 0
 */

int main(void)
{
	int  x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
