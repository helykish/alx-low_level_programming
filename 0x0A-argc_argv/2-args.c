nclude <stdio.h>

/**
 *  * main - show all arguments it receives.
 *   * @argc: echo  number of arguments to the program.
 *    * @argv: An array of pointers to the arguments.
 *     *
 *      * Return: Always 0.
 *       */
int main(int argc, char *argv[])
{
		int arg;

			for (arg = 0; arg < argc; arg++)
						printf("%s\n", argv[arg]);

				return (0);
}
