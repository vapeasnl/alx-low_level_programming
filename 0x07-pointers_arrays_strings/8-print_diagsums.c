#include "main.h"
#include <stdio.h>
/**
* print_diagsums - a function that prints the sum of the two diagonals
* of a square matrix of integers
* @a: input array
* @size: input size
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
int add1, add2, i;
add1 = 0;
add2 = 0;
for (i = 0; i < size; i++)
{
add1 = add1 + a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
{
add2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", add1, add2);
}
