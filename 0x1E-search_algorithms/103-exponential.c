#include "search_algos.h"
/**
* _binary_search - Searches for a value in a sorted array
* @array: A pointer to the first element
* @left: The starting index
* @right: The ending index
* @value: The value
* Return: If the value is not present or the array is NULL, -1.
*/
int _binary_search(int *array, size_t left, size_t right, int value)
{
size_t x;
if (array == NULL)
return (-1);
while (right >= left)
{
printf("Searching in array: ");
for (x = left; x < right; x++)
printf("%d, ", array[x]);
printf("%d\n", array[x]);
x = left + (right - left) / 2;
if (array[x] == value)
return (x);
if (array[x] > value)
right = x - 1;
else
left = x + 1;
}
return (-1);
}
