#include "lists.h"

/**
 * print_listint_safe - print all the elements of a list
 * @head: header pointer to new nodo
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int nn = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		nn++;
	}
	return (nn);
}
