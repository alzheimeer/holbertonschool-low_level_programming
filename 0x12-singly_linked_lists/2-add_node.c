#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t.
 * @head: a pointer
 * @str: a constant string
 * Return: list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new, *temp = NULL;
	size_t i;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
