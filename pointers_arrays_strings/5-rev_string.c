#include "main.h"

/**
 * rev_string - Entry point
 * @s: charater
 * Return: Always 0
 */

void rev_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
for (i = i - 1; s[i] != '\0'; i--)
{
_putchar(s[i]);
}
}
