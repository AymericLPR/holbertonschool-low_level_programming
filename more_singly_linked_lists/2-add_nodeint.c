#include "lists.h"

/**
 * add_nodeint - add a node
 * @head: head
 * @str: string
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;
node = malloc(sizeof(list_t));
if (!node)
{
return (NULL);
}
node->n = n;
node->next = *head;
*head = node;
return (*head);
}
