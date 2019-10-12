#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: pointer to hash table type
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table = NULL;
	unsigned long int i;

	if (size < 1)
		return (NULL);
	/* malloc table*/
	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	/*malloc pointers to the head nodes*/
	hash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	/*Initialize elements pointing*/
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	return (hash_table);
}

/**
 * shash_table_set - adds an element to a shash table
 * @ht: pointer to shash table
 * @key: the string key
 * @value: the string value
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *aux;
	unsigned long int index = 0;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->snext;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		aux = ht->shead;
		while (aux->snext != NULL && strcmp(aux->snext->key, key) < 0)
			aux = aux->snext;
		new_node->sprev = aux;
		new_node->snext = aux->snext;
		if (aux->snext == NULL)
			ht->stail = new_node;
		else
			aux->snext->sprev = new_node;
		aux->snext = new_node;
	}
	return (1);
}

/**
 * shash_table_get - gets an element from a hash table
 * @ht: pointer to hash table
 * @key: the string key
 *
 * Return: string value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *aux;
	unsigned long int index = 0;

	if (!ht || !key || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	aux = ht->shead;
	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
			return (aux->value);
		aux = aux->snext;
	}
	return (0);
}


/**
 * shash_table_print - prints the elements of a hash table
 * @ht: pointer to hash table
 *
 * Return: void.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *aux;
	unsigned long index = 0;
	int f = 0;

	if (!ht)
		return;
	printf("{");
	while (index <= ht->size)
	{
		aux = ht->shead;
		while  (aux)
		{
			if (f)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			f++;
			aux = aux->snext;
		}
		index++;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the elements of a hash table in reverse
 * @ht: pointer to hash table
 *
 * Return: void.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *aux;
	unsigned long index = 0;
	int f = 0;

	if (!ht)
		return;
	printf("{");
	while (index <= ht->size)
	{
		aux = ht->stail;
		while  (aux)
		{
			if (f)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			f++;
			aux = aux->sprev;
		}
		index++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 *
 * Return: void.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *aux;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		aux = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = aux;
	}

	free(ht->array);
	free(ht);
}
