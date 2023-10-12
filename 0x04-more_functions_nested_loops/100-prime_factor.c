#include <stdio.h>
#include <math.h>
/**
* main - the largest prime factor
* Return: Always 0 (Success)
*/
int main(void)
{
long int num;
long int max;
long int a;
num = 612852475143;
max = -1;
while (num % 2 == 0)
{
max = 2;
num /= 2;
}
for (a = 3; a <= sqrt(num); a = a + 2)
{
while (num % a == 0)
{
max = a;
num = num / a;
}
}
if (num > 2)
max = num;
printf("%ld\n", max);
return (0);
}
