#include "lists.h"
/**
 * computes the number of nodes in a linked list of type listint_t
 * @h: linked list of type listint_t to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
return count;
}
