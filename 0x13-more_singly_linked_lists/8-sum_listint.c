#include "lists.h"
/**
* sum_listint - a function that returns the sum
* of all the data (n) of a listint_t linked list.
* @head: first node
* Return: resulting sum,if the list is empty, return 0
*/
int sum_listint(listint_t *head)
{
int add = 0;
listint_t *tmp = head;
while (tmp)
{
add += tmp->n;
tmp = tmp->next;
}
return (add);
}
