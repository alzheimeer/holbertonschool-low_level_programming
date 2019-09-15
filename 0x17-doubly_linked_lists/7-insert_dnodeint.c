#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node at the beginning of a dlistint_t list.
 * @h: pointer to the first element of the list
 * @idx:index
 * @n:number
 * Return: the pointer to a new node at the beginning of a dlistint_t list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux, *dlt;
	unsigned int a = 0;

	aux = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (a < (idx - 1))
	{
		aux = aux->next;
		a++;
		if (aux == NULL)
			return (NULL);
	}
	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));
	if (idx >= a + 2)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	dlt = aux->next;
	new->next = dlt;
	new->prev = aux;
	aux->next = new;
	dlt->prev = new;
	return (new);
}
