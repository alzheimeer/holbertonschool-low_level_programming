#include "lists.h"

/**
 * listint_len - return number of elements
 * @h: header
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int nn = 0;

	while (h)
	{
		h = h->next;
		nn++;
	}
	return (nn);
}
