#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: Array
 * @src: string
 * @n: number
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;

while (x =0; x < n && src[x] != '\0'; x++)
dest[x] = src[x];
while (x < n)
dest[x++] = '\0';
return (dest);
}
