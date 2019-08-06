#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the linked list.
 * Return: 0
 */

void free_listint2(listint_t **head)
{

	listint_t *aux = *head;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;
	while (aux)
	{
		next = aux->next;
		free(aux);
		aux = next;
	}
	*head = NULL;
}
