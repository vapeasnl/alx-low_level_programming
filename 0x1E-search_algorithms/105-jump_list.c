#include "search_algos.h"
/**
* jump_list - Searches for a value in a sorted singly linked list
* @list: A pointer to the head of the linked list to search.
* @size: The number of nodes in the list.
* @value: The value to search for.
* Return: If the value is not present or the head of the list is NULL, NULL.
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t s, s_size;
listint_t *node, *j;
if (list == NULL || size == 0)
return (NULL);
s = 0;
s_size = sqrt(size);
for (node = j = list; j->index + 1 < size && j->n < value;)
{
node = j;
for (s += s_size; j->index < s; j = j->next)
{
if (j->index + 1 == size)
break;
}
printf("Value checked at index [%ld] = [%d]\n", j->index, j->n);
}
printf("Value found between indexes [%ld] and [%ld]\n", node->index, j->index);
for (; node->index < j->index && node->n < value; node = node->next)
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
return (node->n == value ? node : NULL);
}
