#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address first node
 * @idx: index of the list where the new node should be added
 * @n: data node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux, *dlt;
	unsigned int a = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		aux = *head;
		while (a < (idx - 1))
		{
			aux = aux->next;
			a++;
		}
		dlt = aux->next;
		aux->next = new;
		new->next = dlt;
	}
	return (new);

}
