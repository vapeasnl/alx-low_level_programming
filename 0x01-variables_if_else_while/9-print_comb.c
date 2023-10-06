#include <stdio.h>
/**
* main - single-digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i);
if (i != 8)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
