#include "lists.h"

/**
 * print_listint - print all the elements of a list
 * @h: header pointer to new nodo
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nn = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nn++;
	}
	return (nn);
}
