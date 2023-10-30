#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - a function that frees a 2 dimensional
* grid previously created by your alloc_grid function
* @grid: 2dimensional grid
* @height: height dimension of grid
* Return: NULL
*
*/
void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
{
free(grid[x]);
}
free(grid);
}
