#include "main.h"

/**
 * *_strncat - concatenates two given strings
 * @dest: string
 * @src: string
 * @n: number
 * Return: Pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
  int i = 0;
  int x = 0;

while (dest[i])
i++;
while (x < n && src[x] != '\0')
dest[i++] = src[x++];
dest[i] = '\0';
return (dest);
}
