#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplication of two numbers followed by new line.
 * @argc: No. of args to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If receives two arguments 0.
 *         If does not receive two arguments 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
