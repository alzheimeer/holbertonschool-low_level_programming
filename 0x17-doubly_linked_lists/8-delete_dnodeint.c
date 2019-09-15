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

	if (*head == NULL || head == NULL)
		return(-1);
	aux = *head;
	while (aux->next != NULL)
	{
		aux = aux->next;
		a++;
	}
	if (index > a)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			aux = NULL;
			free(*head);
			*head = NULL;
			return (-1);
		}
		else
		{
			a1 = *head;
			*head =	(*head)->next;
			(*head)->prev = NULL;
			free(a1);
			return (1);
		}
	}
	else if (a == index)
	{
		a1 = aux;
		aux = aux->prev;
		aux->next = NULL;
		free(a1);
		return (1);
	}
	else
	{
		aux = *head;
		while (b < index - 1)
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
}
