#include "main.h"

/**
 * *_strcat - Entry point
 * @dest: pointer
 * @src: pointer
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int x = 0;

while (dest[i])
i++;
while (src[x])
dest[i++] = src[x++];
dest[i] = src[x];
return (dest);
}
