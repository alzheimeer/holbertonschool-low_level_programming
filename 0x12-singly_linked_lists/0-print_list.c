#include "lists.h"
/**
 *print_list - print all elements of a list_t list
 * @h: list linked
 * Return: number of nodes
 * if str is NULL print [0] (nil)
 * You are allowed to use printf
 */



size_t print_list(const list_t *h)
{

	int n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);

}
