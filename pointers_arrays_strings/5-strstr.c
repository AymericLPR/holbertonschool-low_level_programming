#include "main.h"

/**
 * *_strstr - Entry point
 * @haystack: string
 * @needle: string
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int n;
if (*needle == '\0')
{
return (haystack);
}
for (i = 0; haystack[i]; i++)
{
if (haystack[i] == needle[0])
{
for (n = 0; haystack[i] == needle[n]; i++, n++)
{
if (needle[n] == '\0')
{
return (haystack + i - n);
}
}
}
}
return (0);
}
