#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
int i;
int n;

for (i = 0; i < 8; i++)
{
for (n = 0; n < 8; n++)
{
printf("%c", a[i][n]);
}
printf("\n");
}
}
