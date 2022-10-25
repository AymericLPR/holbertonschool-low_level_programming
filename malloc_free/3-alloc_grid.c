#include <stdlib.h>

/**
 *alloc_grid - fx that allocade space for a grid of given width and height
 *@width: given width as the name is explainatory enough
 *@height:  given height as the name is explainatory enough
 *Return: 0
 */

int **alloc_grid(int width, int height)
{
int i, x, y;
int **c;

if (width == 0 || height == 0)
return (NULL);
c = malloc(height * sizeof(int *));
if (c == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
c[i] = malloc(width * sizeof(int));
if (c[i] == NULL)
{
while (i >= 0)
{
free(c[i]);
i--;
}
free(c);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
{
c[x][y] = 0;
}
}
return (c);
}
