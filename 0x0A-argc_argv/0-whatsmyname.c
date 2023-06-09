#include <stdio.h>
#include "main.h"
#include "stdlib.h"

/**
 * main - print a name of the program
 * @argc: numbr of argument
 * @argv: array of argument
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
