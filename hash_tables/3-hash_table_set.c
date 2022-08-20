

#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *p;
	hash_node_t *node;
	unsigned long pos = hash_djb2((unsigned char *)key);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	index = pos % ht->size;
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	p = ht->array[index];

	if (p != NULL && strcmp(p->key, key) == 0)
	{
		free(p->value);
		p->value = strdup(value);
		return (1);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}