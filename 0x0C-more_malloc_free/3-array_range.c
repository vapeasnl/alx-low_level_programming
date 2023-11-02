#include <stdlib.h>
#include "main.h"
/**
* *array_range - a function that creates an array of integers.
* @min: minimum range of values stored
* @max: maximum range of values stored
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
int *ar;
int a, siz;
if (min > max)
return (NULL);
siz = max - min + 1;
ar = malloc(sizeof(int) * siz);
if (ar == NULL)
return (NULL);
for (a = 0; min <= max; a++)
ar[a] = min++;
return (ar);
}
