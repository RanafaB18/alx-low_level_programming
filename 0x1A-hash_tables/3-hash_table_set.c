#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if successful else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	char *copyOfValue;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	copyOfValue = strdup(value);
	if (copyOfValue == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = copyOfValue;
		return (1);
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(copyOfValue);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = copyOfValue;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
