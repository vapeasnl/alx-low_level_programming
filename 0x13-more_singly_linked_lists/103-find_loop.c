#include "lists.h"
/**
* find_listint_loop - a function that finds the loop in a linked list.
* @head: linked list
* Return: The address of the node where the loop starts,
* or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *lento = head;
listint_t *quickly = head;
if (!head)
return (NULL);
while (lento && quickly && quickly->next)
{
quickly = quickly->next->next;
lento = lento->next;
if (quickly == lento)
{
lento = head;
while (lento != quickly)
{
lento = lento->next;
quickly = quickly->next;
}
return (quickly);
}
}
return (NULL);
}
