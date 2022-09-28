#include "main.h"

/**
  * _puts_recursion - Print a string in reverse
  * @s: the string to print
  *
  * Return: Nothing.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);

	_putchar(*s);
}
