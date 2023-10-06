#include <stdio.h>
/**
* main - Print numbers from 0 to 10 with putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
putchar('\n');   
return (0);
}
