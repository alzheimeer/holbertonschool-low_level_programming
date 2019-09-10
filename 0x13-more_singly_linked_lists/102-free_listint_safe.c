#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: head of the linked list.
 * Return: 0
 */
size_t free_listint_safe(listint_t **h)
{

	listint_t *pt = *h, *aux;
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (pt != NULL)
	{
		i++;
		aux = pt;
		pt = pt->next;
		free(aux);
		if (aux < pt)
			break;
		*h = NULL;
	}
	return (i);
}
