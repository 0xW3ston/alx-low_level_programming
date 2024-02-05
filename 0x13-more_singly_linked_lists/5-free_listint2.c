#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head
 *
 * Return: None
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tracker;

	if (head != NULL)
	{
		tracker = *head;
		while ((tmp = tracker) != NULL)
		{
			tracker = tracker->next;
			free(tmp);
		}
		*head = NULL;
	}
}
