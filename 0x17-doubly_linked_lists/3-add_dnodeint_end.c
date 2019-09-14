#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of the list
 * @n: value of the node
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (aux == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	return (new);
}
