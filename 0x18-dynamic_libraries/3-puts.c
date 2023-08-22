#include "main.h"

/**
 * puts - print the string, followd by rhe new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
