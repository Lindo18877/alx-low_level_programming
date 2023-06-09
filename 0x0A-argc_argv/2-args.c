#include <stdio.h>
#include "main.h"
#include "stdlib.h"

/**
 * main - print argument as it receives
 * @argc: number of an  argument
 * @argv: array of an  argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
