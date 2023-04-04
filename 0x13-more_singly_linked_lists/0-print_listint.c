/*
* File:0-print_listint.c
*Auth:Agbro gift
*/



#include "lists.h"

/**
 * print_listint - this function will print elements of a linked list
 * @h: linked list of types listint_t to print
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
