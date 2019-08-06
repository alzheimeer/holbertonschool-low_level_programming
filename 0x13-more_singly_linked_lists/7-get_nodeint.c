#include "lists.h"

/**
 * get_nodeint_at_index - get_nodeint_at_index list
 * @head: address first node
 * @index: n
 * Return: if node does not exit NULL
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *aux = NULL;

	aux = head;
	a = 0;
	if (head)
	{
		while (index != a)
		{
			aux = aux->next;
			a++;
		}
		return (aux);
	}
	else
		return (NULL);
}
