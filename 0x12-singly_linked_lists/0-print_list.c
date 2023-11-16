#include <stdio.h>
#include "lists.h"
/**
* print_list - a function that prints all the elements
* of a list_t list
* @h: pointer to the list_t
* Return: the nodes printed
*/
size_t print_list(const list_t *h)
{
size_t ch = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
ch++;
}
return (ch);
}

