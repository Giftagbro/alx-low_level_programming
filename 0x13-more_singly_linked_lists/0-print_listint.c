#include "lists.h"
/**
 * print_listint - this function will print elements of a linked list
 * @h: linked list of types listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t numbz = 0;

	while (node)
	{
	printf("%d\n", node->n);
	numbz++;
	node = node->next;
	}
	return (numbz);
}
