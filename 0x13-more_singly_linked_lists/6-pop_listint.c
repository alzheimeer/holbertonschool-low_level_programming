#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: address pointer
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *aux, *ant;

	aux = *head;
	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		ant = aux;
		aux = ant->next;
		free(*head);
		*head = aux;
		return (ant->n);
	}
}
