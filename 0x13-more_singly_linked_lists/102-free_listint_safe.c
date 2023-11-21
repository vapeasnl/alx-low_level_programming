#include "lists.h"
/**
* free_listint_safe - a function that frees a listint_t list.
* @h: the first node
* Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
size_t lenght = 0;
int dif;
listint_t *tmp;
if (!h || !*h)
return (0);
while (*h)
{
dif = *h - (*h)->next;
if (dif > 0)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
lenght++;
}
else
{
free(*h);
*h = NULL;
lenght++;
break;
}
}
*h = NULL;
return (lenght);
}
