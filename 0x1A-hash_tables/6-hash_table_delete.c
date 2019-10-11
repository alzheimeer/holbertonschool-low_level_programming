#include "hash_tables.h"
/**
 * hash_table_delete - delete all
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *aux, *aux2;

	if (!ht || !ht->array || !ht->size)
		return;

	while (index < ht->size)
	{
		aux = ht->array[index];
		while (aux)
		{
			aux2 = aux;
			aux = aux->next;
			free(aux2->key);
			free(aux2->value);
			free(aux2);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
