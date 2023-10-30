#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - a function that returns a pointer to a 2 dimensional
* array of integers
* @width: width input
* @height: height input
* Return: pointer to a 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
int **dim;
int a, b;
if (width <= 0 || height <= 0)
return (NULL);
dim = malloc(sizeof(int *) * height);
if (dim == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
dim[a] = malloc(sizeof(int) * width);
if (dim[a] == NULL)
{
for (; a >= 0; a--)
free(dim[a]);
free(dim);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (y = 0; b < width; b++)
dim[a][b] = 0;
}
return (dim);
}
