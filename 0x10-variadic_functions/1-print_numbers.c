#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints function numbers.
 * @n: resepresents no of arguments
 * @separator: resepresents the seperato
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* va_list store the var list */
	va_list my_nums;
	unsigned int count;

	/* init valist for arguments number */
	va_start(my_nums, n);

	/* loop via all arguments stor */
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(my_nums, unsigned int));
		if (count < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(my_nums);
	printf("\n");
}
