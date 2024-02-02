#include "hash_tables.h"

/**
* hash_table_set - a function that adds an element to the hash table.
* @ht: A pointer to the hash table.
* @key: The key to add - cannot be an empty string.
* @value: The value associated with key.
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *nv;
char *vc;
unsigned long int idx, i;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
vc = strdup(value);
if (vc == NULL)
return (0);
idx = key_index((const unsigned char *)key, ht->size);
for (i = idx; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = vc;
return (1);
}
}
nv = malloc(sizeof(hash_node_t));
if (nv == NULL)
{
free(vc);
return (0);
}
nv->key = strdup(key);
if (nv->key == NULL)
{
free(nv);
return (0);
}
nv->value = vc;
nv->next = ht->array[idx];
ht->array[idx] = nv;
return (1);
}
