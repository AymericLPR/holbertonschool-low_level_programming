#include "main.h"

/**
 * puts2 - Entry point
 * @str: charater
 * Return: Always 0
 */

void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
i++;
if (i % 2 == 0)
{
_putchar(s[i]);
}
}
_putchar('\n');
}
