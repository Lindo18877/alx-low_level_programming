#include "lists.h"
#include <stddef.h>
/**
 * print_listint - print all element of the linked lists
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;
	const listint_t *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		nodes++;
	}

	return (nodes);
}
