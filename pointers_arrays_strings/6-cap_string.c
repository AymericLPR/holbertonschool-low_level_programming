#include "main.h"

/**
 * cap_string - Entry point
 * @s: string
 * Return: Always 0
 */

char *cap_string(char *s)
{
int i;

while (s[i] != '\0')
{
if (s[i] > 96 && s[i] < 123)
{
if (s[i - 1] == ' ' || s[i - 1] == '\t' ||
s[i - 1] == '\n' || s[i - 1] == ',' ||
s[i - 1] == ';' || s[i - 1] == '.' ||
s[i - 1] == '!' || s[i - 1] == '?' ||
s[i - 1] == '"' || s[i - 1] == '(' ||
s[i - 1] == ')' || s[i - 1] == '{' ||
s[i - 1] == '}' || i == 0)
{
s[i] = s[i] - 32;
}
}
i++;
}
return (s);
}
