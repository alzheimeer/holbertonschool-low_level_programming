#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *b, *a;

	a = head;
	while (a != NULL)
	{
		b = a->next;
		free(a);
		a = b;
	}
}
