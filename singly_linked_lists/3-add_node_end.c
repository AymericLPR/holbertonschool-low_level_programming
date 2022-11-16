#include "lists.h"

/**
 * add_node_end - adds a node at the end
 * @head: head
 * @str: string
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
list_t *tmphead = *head;

node = malloc(sizeof(list_t));
if (!node)
return (NULL);
node->str = strdup(str);
node->len = strlen(str);
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
