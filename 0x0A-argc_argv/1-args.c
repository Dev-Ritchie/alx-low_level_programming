#include <stdio.h>

/**
 * main - print name of program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%s\n", argc - 1);

	return (0);
}
