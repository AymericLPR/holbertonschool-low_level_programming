#include "main.h"

/**
 * _strlen - Entry point
 * @s: number
 * Return: Always 0
 */

int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; ++i)
{
printf("Length of the string: %d", i);
}
return 0;
}
