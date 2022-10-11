#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest: pointer
 * @src: pointer
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
_putchar(src[i]);
i++;
}
dest[i] = src[i];
return (dest);
}
