#include "main.h"

/**
 * main - Print "_putchar" and followed by a new line.
 * Description: Don't  include standard libraries.
 * Return: 0
 */

int main(void)
{
	char myVar[] = "_putchar";
	int i = 0;

	while (myVar[i] != '\0')
	{
		_putchar(myVar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
