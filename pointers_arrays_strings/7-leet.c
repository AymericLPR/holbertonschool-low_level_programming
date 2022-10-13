#include "main.h"

/**
 * leet - Entry point
 * @s: string
 * Return: Always 0
 */

char *leet(char *s)
{
int i;
char letter[]("aAeEoOtTlL");
char number[]("4433007711");

for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; letter[n] != '\0'; n++)
{
if (letter[n] == s[i])
{
s[i] = number[n];
}
}
}
return (s);
}
