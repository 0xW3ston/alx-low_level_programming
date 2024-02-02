#include "lists.h"
/**
 * add_node - add func
 * @head: head
 * @str: n str
 * Return: PTR
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	size_t nbchar;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);

	new_element->str = strdup(str);

	for (nbchar = 0; str[nbchar]; nbchar++)
		;

	new_element->len = nbchar;
	new_element->next = *head;
	*head = new_element;

	return (*head);
}
