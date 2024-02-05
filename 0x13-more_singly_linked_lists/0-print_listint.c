#include "lists.h"

/**
 * print_listint - function that prints all the
 * elements of a listint_t list
 * @h: head
 *
 * Return: NODES NUMBER
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_elements++;
	}
	return (nodes_elements);
}
