#include <stdio.h>
/**
* main - combinations of three digits
* Return: Always 0 (Success)
*/
int main(void)
{
int a, b, c;
for (a = 0; a < 9; a++)
{
for (b = 0; b < 9; b++)
{
for (c = 0; c < 9; c++)
{
if (c > b && b > a)
{
putchar(a);
putchar(b);
putchar(c);
if (a != 8 || b != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
