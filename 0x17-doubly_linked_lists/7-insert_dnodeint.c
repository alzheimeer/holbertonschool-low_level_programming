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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 || *h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else
	{
		aux = *h;
		while (a < (idx - 1))
		{
			aux = aux->next;
			a++;
		}
		if (aux->next != NULL)
		{
			dlt = aux->next;
			new->prev = aux;
			aux->next = new;
			new->next = dlt;
			dlt->prev = new;
		}
		else
		{
			return (new);
		}
	}
	return (new);
}
