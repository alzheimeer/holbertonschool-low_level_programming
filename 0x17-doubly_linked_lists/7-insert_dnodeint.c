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

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	aux = *h;
	if (idx == 0 || *h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else
	{
		while (a < (idx))
		{
			aux = aux->next;
			a++;
		}
		if (idx >= a + 2)
			return (NULL);
		if (aux->next != NULL)
		{
			dlt = aux->next;
			aux->next = new;
			new->prev = aux;
			new->next = dlt;
			dlt->prev = new;
			return (new);
		}
		else
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
	}
	return (new);
}
