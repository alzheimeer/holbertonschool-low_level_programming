#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: head of the linked list.
 * Return: 0
 */
size_t free_listint_safe(listint_t **h)
{

	listint_t *aux = *h;
	listint_t *next;

	while (aux)
	{
		next = aux->next;
		free(aux);
		aux = next;
	}
	*h = NULL;
}
