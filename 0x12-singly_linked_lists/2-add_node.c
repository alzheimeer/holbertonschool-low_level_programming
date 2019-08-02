#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t.
 * @head: a pointer
 * @str: a constant string
 * Return: list.
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	size_t length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[length])
		length++;
	new->len = length;
	new->next = *head;
	*head = new;

	return (*head);

}
