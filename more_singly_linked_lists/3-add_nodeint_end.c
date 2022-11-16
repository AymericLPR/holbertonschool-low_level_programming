#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: head
 * @n: node
 * Return: Always 0.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;
listint_t *tmphead = *head;

node = malloc(sizeof(listint_t));
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
