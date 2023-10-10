#include <stdio.h>
/**
* main - sum of the even-valued terms
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
unsigned long int b, c, suiv, add;
b = 1;
c = 2;
add = 0;
for (a = 1; a <= 33; ++a)
{
if (b < 4000000 && (b % 2) == 0)
{
add = add + b;
}
suiv = b + c;
b = c;
c = suiv;
}
printf("%lu\n", add);
return (0);
}
