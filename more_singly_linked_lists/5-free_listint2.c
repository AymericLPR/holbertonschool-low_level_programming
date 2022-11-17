#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: head
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
listint_t *clean;

if (!head)
return;
while (*head)
{
clean = (*head)->next;
free(*head);
*head = clean;
}
*head = NULL;
}
