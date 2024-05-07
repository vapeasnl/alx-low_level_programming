#include "search_algos.h"
/**
* jump_search - Searches for a value in a sorted array
* @array: A pointer to the first element
* @size: The number of elements
* @value: The value
* Return: If the value is not present or the array is NULL, -1.
*/
int jump_search(int *array, size_t size, int value)

{
size_t i, j, s;
if (array == NULL || size == 0)
return (-1);
s = sqrt(size);
for (i = j = 0; j < size && array[j] < value;)
{
printf("Value checked array[%ld] = [%d]\n", j, array[j]);
i = j;
j += s;
}
printf("Value found between indexes [%ld] and [%ld]\n", i, j);
j = j < size - 1 ? j : size - 1;
for (; i < j && array[i] < value; i++)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
return (array[i] == value ? (int)i : -1);
}
