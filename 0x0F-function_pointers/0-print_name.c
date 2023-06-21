#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints names
 * @name: names to prints
 * @f: pointer to function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
