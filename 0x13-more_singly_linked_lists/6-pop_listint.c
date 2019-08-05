#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: address pointer
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *aux, *nh;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		nh = *head;
		aux = nh->next;
		free(nh);
		nh = aux;
		return (nh->n);
	}
}
