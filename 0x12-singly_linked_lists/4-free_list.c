#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *tmp, *aux;

	tmp = head;

	while (tmp)
	{
		aux = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = aux;
	}
	head = NULL;
}
