#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: address of head entered
 * @n: data of a node new
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
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
		while (aux->next)
			aux = aux->next;

		aux->next = new;
	}
		return (*head);
}
