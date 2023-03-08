#include "main.h"

/**
 * _puts__rev_recursion - Print a string in reverse
 * @s: the string to reverse
 *
 * Return: Nothing
 */

void _puts_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');

}
