#include "hash_tables.h"

/**
* hash_table_get - a function that retrieves a value associated with a key.
* @ht: A pointer to the hash table.
* @key: The key to get the value of.
* Return: the valu associated with the element or NUL if key couldnt be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *n;
unsigned long int idx;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);
if (idx >= ht->size)
return (NULL);
n = ht->array[idx];
while (n && strcmp(n->key, key) != 0)
n = n->next;
return ((n == NULL) ? NULL : n->value);
}
