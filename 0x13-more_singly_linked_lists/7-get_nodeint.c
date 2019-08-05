#include "lists.h"

/**
 * get_nodeint_at_index - get_nodeint_at_index list
 * @head: address first node
 * @index: n
 * Return: if node does not exit NULL
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *aux = head;

	if (head)
	{
		while (aux->next && index != a)
		{
			aux = aux->next;
			a++;
		}
		return (aux);
	}
	else
		return (NULL);
}
