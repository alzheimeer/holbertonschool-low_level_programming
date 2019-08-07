
/**
 * reverse_listint -  that reverses a list
 * @head: address first node
 * Return: head reverse
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;
	listint_t *actual = NULL;

	actual = *head;
	while (actual != NULL)
	{
		next = actual->next;
		actual->next = prev;
		prev = actual;
		actual = next;
	}
	*head = prev;
	return (*head);


}
