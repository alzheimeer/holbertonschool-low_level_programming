#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at the n position
 * @head: first element of the list
 * @index:n position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *a1, *a2;
	unsigned int b = 0, a = 0;

	aux = *head;
	a1 = *head;
	a2 = *head;
	while (aux != NULL)
	{
		aux = aux->next;
		a++;
	}
	if (head == NULL || index == 0)
	{
		if (a1->next == NULL)
		{
			free(*head);
			return (-1);
		}
		else
		{
			a2 = a2->next;
			a2->prev = NULL;
			*head = a2;
			free(a1);
			return (1);
		}
	}
	else if (a == (index - 1))
	{
		a1 = aux->next;
		aux->next = NULL;
		free(a1);
		return (1);
	}
	else
	{
		while (b < index)
		{
			aux = aux->next;
			b++;
		}
		a1 = aux->next;
		a2 = a1->next;
		aux->next = a2;
		a2->prev = aux;
		free(a1);
		return (1);
	}
	return (-1);
}
