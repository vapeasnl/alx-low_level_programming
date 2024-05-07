#include "search_algos.h"
/**
* advanced_binary_recursive - Searches recursively for a value in a sorted
* @array: A pointer to the first element of the [sub]array to search.
* @left: The starting index
* @right: The ending index
* @value: The value
* Return: If the value is not present, -1.
*/
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
size_t x;
if (right < left)
return (-1);
printf("Searching in array: ");
for (x = left; x < right; x++)
printf("%d, ", array[x]);
printf("%d\n", array[x]);
x = left + (right - left) / 2;
if (array[x] == value && (x == left || array[x - 1] != value))
return (x);
if (array[x] >= value)
return (advanced_binary_recursive(array, left, x, value));
return (advanced_binary_recursive(array, x + 1, right, value));
}
/**
* advanced_binary - Searches for a value in a sorted array
* @array: A pointer to the first element
* @size: The number of elements
* @value: The value
* Return: If the value is not present or the array is NULL, -1.
*/
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);
return (advanced_binary_recursive(array, 0, size - 1, value));
}
