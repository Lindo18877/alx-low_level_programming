#include "main.h"

/**
 * _puts - print a string
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_puts("*str");
	}
	_puts("\n");
}
