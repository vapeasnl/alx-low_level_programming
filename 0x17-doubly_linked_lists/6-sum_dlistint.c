#include "lists.h"
/**
* sum_dlistint - a function that returns the sum of all
* the data (n) of a dlistint_t linked list.
* @head: head
* Return: add of the data
*/
int sum_dlistint(dlistint_t *head)
{
int add;
add = 0;
if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;
while (head != NULL)
{
add += head->n;
head = head->next;
}
}
return (add);
}

