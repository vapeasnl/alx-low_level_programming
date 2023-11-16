#include <stdlib.h>
#include "lists.h"
/**
* list_len - a function that returns the number
* of elements in a linked list_t list
* @h: pointer to the list_t list
* Return: elements in h
*/
size_t list_len(const list_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}

