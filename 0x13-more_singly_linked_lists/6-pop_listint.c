#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: address pointer
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;

	aux = *head;
	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		*head = aux->next;
		return (aux->n);
		free(aux);
	}
}
