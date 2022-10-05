#include "main.h"
/**
 * _islower - Entry point
 * Return: 0 (Success)
 * @c: variable not a letter
 */
int _isalpha(int c)
{
if ((c > 96 && c < 124) || (c > 64 && c < 91))
{
return (1);
}
else
return (0);
}
