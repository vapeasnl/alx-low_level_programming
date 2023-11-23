#include "main.h"
/**
* print_binary - prints a number in binary notation
* @n: number to print
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int div, verif;
char flag;
flag = 0;
div = _power(2, sizeof(unsigned long int) * 8 - 1);
while (div != 0)
{
verif = n & div;
if (verif == div)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || div == 1)
{
_putchar('0');
}
div >>= 1;
}
}
/**
* _power - a function calculates the exponent
* @base: base
* @power: power
* Return: the exponent
*/
unsigned long int _power(unsigned int base, unsigned int power)
{
unsigned long int n;
unsigned int i;
n = 1;
for (i = 1; i <= power; i++)
n *= base;
return (n);
}
