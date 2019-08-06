#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: address firts node
 * @index: node to erase.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *ant, *aux;
	unsigned int a = 0;

	aux = *head;
	if (index != 0)
	{
		while (a < (index))
		{
			ant = aux;
			aux = aux->next;
			a++;
		}
	ant->next = aux->next;
	free(ant);
	}
	else
	{
		ant = aux;
		aux = aux->next;
		free(*head);
		*head = aux;


	}
	return (1);
}
