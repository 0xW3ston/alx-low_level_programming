#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list,
 * and returns the head node’s data (n).
 * @head: head
 *
 * Return: HEAD (data)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;
	listint_t *t;

	if (*head == NULL)
		return (0);

	t = *head;

	n = t->n;

	h = t->next;

	free(t);

	*head = h;

	return (n);
}
