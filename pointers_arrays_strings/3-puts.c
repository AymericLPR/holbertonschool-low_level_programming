#include "main.h"

/**
 * _puts - Entry point
 * @str: charater
 * Return: Always 0
 */

void _puts(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
i++;
}
_puts(str[i]);
_puts('\n');
}
