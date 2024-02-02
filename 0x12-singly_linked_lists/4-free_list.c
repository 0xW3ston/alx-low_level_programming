#include "lists.h"

/**
 * free_list - free list function
 * @head: list's head
 * Return: None
 */

void free_list(list_t *head)
{
	list_t *actuel;

	while ((actuel = head) != NULL)
	{
		head = head->next;
		free(actuel->str);
		free(actuel);
	}
}
