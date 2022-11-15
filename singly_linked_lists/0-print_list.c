#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - print nodes
 *@h: pointer
 *Return: Always 0.
 */

size_t print_list(const list_t *h)
{
int num = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
h = h->next;
num++;
}
printf("[%d] %s\n", h->len, h->str);
h = h->next;
num++;
}
return (num);
}
