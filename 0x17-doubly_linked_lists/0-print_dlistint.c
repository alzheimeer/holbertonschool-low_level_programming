#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nx = 0;
	const dlistint_t *aux = h;

	if (h == NULL)
		return (nx);
	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		nx++;
		aux = aux->next;
	}
	return (nx);
}
