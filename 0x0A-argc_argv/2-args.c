#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: No. of arguments to the program.
 * @argv: Array of pointers to the arg.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
