#include "lists.h"

/**
 * print_listint - print all the elements of a list
 * @h: header pointer to new nodo
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *aux;

	aux = h;
	int nn = 0;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		nn++;
	}
	return (nn);
}
