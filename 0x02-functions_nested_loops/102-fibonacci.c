#include <stdio.h>
/**
* main - Prints first 50 Fibonacci numbers
* Return: Always 0.
*/
int main(void)
{
int res;
unsigned long f1 = 0, f2 = 1, add;
for (res = 0; res < 50; res++)
{
add = f1 + f2;
printf("%lu", add);
f1 = f2;
f2 = add;
if (res == 49)
printf("\n");
else
printf(", ");
}
return (0);
}

