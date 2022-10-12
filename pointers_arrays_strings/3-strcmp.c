#include "main.h"

/**
 * _strcmp - compares two given strings
 * @s1: string
 * @s2: string
 * Return: Always 0 
 */
int _strcmp(char *s1, char *s2)
{
int x;

while(s1[x] == s2[x])
x++;
return (s1[x] - s2[x]);
}
