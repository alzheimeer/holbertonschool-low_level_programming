#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: address pointer
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *aux = NULL;
	int n = 0;

	aux = *head;
	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	*head = aux->next;
	free(aux);
	return (n);
}
