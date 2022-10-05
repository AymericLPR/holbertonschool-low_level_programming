#include "main.h"
/**
 * _islower - Entry point
 * Return: 0 (Success)
 */
int _islower(int c)
{
int alpha = 97;
while (alpha < 123)
{
putchar(alpha);
alpha++;
if (alpha != 99)
return (0);
else
return (1);
}
