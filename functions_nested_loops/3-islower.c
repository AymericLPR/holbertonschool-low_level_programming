#include "main.h"
/**
 * _islower - Entry point
 * Return: 0 (Success)
 * @c: variable not a letter
 */
int _islower(int c)
{
if (c > 96 && c < 124)
{
return (1);
}
else
return (0);
}
