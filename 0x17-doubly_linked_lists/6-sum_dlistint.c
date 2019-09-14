#include "lists.h"

/**
 * sum_dlistint - + the numbers of a dlistint_t list.
 * @head: pointer to the first element of the list
 * Return: no return
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head == NULL)
		goto loop;
	while (head != NULL)
	{
		s = head->n + s;
		head = head->next;
	}
loop:
	return (s);
}
