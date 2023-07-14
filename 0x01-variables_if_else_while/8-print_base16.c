#include <stdio.h>

/**
 * main - The main block
 * Description: Print all numbers of base64 in lowercase.
 * only use `putchar`,  3 times.
 * Return: 0
 */

int main(void)
{
	int x;
	char c;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
