#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *lc;

	while (lc = head)
	{
		head = head->next;
		free(lc->str);
		free(lc);
	}
}
