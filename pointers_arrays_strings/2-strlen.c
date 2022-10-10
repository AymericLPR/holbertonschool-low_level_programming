#include "main.h"

/**
 * _strlen - Entry point
 * @s: number
 * Return: Always 0
 */

int _strlen(char *s)
{
int i;
 i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
