#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * that deletes the node
 * at index index of a listint_t linked list.
 * @head: head
 * @index: node index
 *
 * Return: if success (1) else (-1)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *n;
	listint_t *next;

	n = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && n != NULL; i++)
		{
			n = n->next;
		}
	}

	if (n == NULL || (n->next == NULL && index != 0))
	{
		return (-1);
	}

	next = n->next;

	if (index != 0)
	{
		n->next = next->next;
		free(next);
	}
	else
	{
		free(n);
		*head = next;
	}

	return (1);
}
