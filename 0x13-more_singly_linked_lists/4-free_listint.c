#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of the linked list.
 * Return: 0
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
		free(head);
}
