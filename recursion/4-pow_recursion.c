#include "main.h"

/**
 *_pow_recursion - Entry point
 *@x: number1
 *@y: number2
 *Return: Always 0
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
return (0);
}
return (x * _pow_recursion(x, y - 1));
}
