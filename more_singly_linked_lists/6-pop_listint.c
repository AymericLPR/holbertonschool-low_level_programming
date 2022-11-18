#include "lists.h"


/**
 * pop_listint - remove the head node
 * @head: head
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
listint_t *stock;
int num;

if (*head != NULL)
{
num = (*head)->n;
stock = (*head)->next;
free(*head); 
*head = stock;
}
return (num);
}
