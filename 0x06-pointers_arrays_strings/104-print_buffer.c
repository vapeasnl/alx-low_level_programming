#include "main.h"
#include <stdio.h>
/**
* print_buffer - a function that prints a buffer
* @b: is the buffer
* @size: is the size
* Return: void
*/
void print_buffer(char *b, int size)
{
int x, v, w;
x = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (x < size)
{
v = size - x < 10 ? size - x : 10;
printf("%08x: ", x);
for (w = 0; w < 10; w++)
{
if (w < v)
printf("%02x", *(b + x + w));
else
printf("  ");
if (w % 2)
{
printf(" ");
}
}
for (w = 0; w < v; w++)
{
int c = *(b + x + w);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
x += 10;
}
}
