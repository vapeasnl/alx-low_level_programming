#include "lists.h"
/**
* delete_nodeint_at_index - a function that deletes the node
* at index index of a listint_t linked list.
* @head: the first element
* @index: index
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
listint_t *latest = NULL;
unsigned int x = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
while (x < index - 1)
{
if (!tmp || !(tmp->next))
return (-1);
tmp = tmp->next;
x++;
}
latest = tmp->next;
tmp->next = latest->next;
free(latest);
return (1);
}
