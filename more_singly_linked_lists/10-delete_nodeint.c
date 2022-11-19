#include "lists.h"

/**
 *delete_nodeint_at_index - function that deletes a node at a given index
 *@head: pointer head
 *@index: index
 *Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *stock = *head;
listint_t *use;

if (!stock)
return (-1);
while (*head && index)
{
if (!stock)
return (-1);
if (i == index - 1)
break;
stock = stock->next;
++i;
}
if (index)
{
use = stock->next->next;
free(stock->next);
stock->next = use;
}
else
{
*head = (*head)->next;
free(stock);
}
return (1);
}
