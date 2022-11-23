#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: head
 * @n: node
 * Return: Always 0.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node;
dlistint_t *tmphead = *head;

node = malloc(sizeof(dlistint_t));
if (!node)
return (NULL);
node->n = n;
node->next = NULL;
if (!*head)
{
*head = node;
return (*head);
}
while (tmphead->next)
tmphead = tmphead->next;
tmphead->next = node;
return (tmphead);
}
