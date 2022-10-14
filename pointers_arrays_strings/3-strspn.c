#include "main.h"

/**
 * *_strspn - Entry point
 * @accept: pointer
 * @s: pointer
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int n = 0;

while (s[i] != '\0')
{
if (s[i] == accept[])
{
n++;
if (s[i + 1] == accept[])
{
break;
}
}
i++;
}
return (s);
}

	 
