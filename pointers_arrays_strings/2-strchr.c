#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: string
 * @c: character
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
int i = 0;

 while (s[i] != '\0')
   {
     if (s[i] == c)
       {
	 return (s + i);
       }
     i++;
   }
 return (NULL);
}
