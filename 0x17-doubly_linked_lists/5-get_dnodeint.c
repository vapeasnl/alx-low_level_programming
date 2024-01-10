#include "lists.h"
/**
* get_dnodeint_at_index - a function that returns
* the nth node of a dlistint_t linked list.
* @head: pointer
* @index: index
* Return: the nth node or null
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int dim;
dlistint_t *temp;
dim = 0;
if (head == NULL)
return (NULL);
temp = head;
while (temp)
{
if (index == dim)
return (temp);
dim++;
temp = temp->next;
}
return (NULL);
}
