#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - print the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int x = 0, y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x *y);

		return (0);
	}

	printf("Error\n");
	return (1);
}
