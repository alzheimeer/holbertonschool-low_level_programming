#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: address of first node
 * Return: data (n), if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	unsigned int p = 0;

	if (head == NULL)
		return (0);

	while (head->next)
	{
		p += head->n;
		head = head->next;
	}
	p += head->n;
	return (p);


}
