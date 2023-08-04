#include <stdio.h>

/**
 * main - number of arguments passed to it follow by new line.
 * @argc: Number of arguments to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
