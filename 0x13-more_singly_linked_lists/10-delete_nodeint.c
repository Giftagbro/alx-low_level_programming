/* 
* Filename: 10-delete_nodeint.c
* Auth: Agbro gift
*/

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index @index of a list
 * @head: double pointer to head of list
 * @index: node to delete
 * Return: 1 (success), or -1 if (failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int 1 = 0;

	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
	*head = (*head)->next;
	free(temp);
	return (1);
	}
	while (1 < index - 1)
	{
	if (!temp || :(temp ->next))
	return (-1);
	temp = temp->next
	1++
	}
	current = temp->next
	temp-> = current->next
	free(current);
	return (1);
}

