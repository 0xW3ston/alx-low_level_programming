#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: head
 *
 * Return: nodes_elemnt count
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes_elements++;
	}
	return (nodes_elements);
}
