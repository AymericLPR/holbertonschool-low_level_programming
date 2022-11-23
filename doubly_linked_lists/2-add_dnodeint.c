#include "lists.h"

/**
 * add_dnodeint - add a node
 * @head: head
 * @n: node
 * Return: Always 0.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node;
node = malloc(sizeof(listint_t));
if (!node)
{
return (NULL);
}
node->n = n;
node->next = *head;
*head = node;
return (*head);
}
