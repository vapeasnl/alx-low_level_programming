#include "main.h"
/**
* mul - multiplies a char with a string and places the answer into dest
* @n: char to multiply
* @num: string to multiply
* @num_index: last non NULL index of num
* @dest: destination of multiplication
* @dest_index: highest index to start addition
*
* Return: pointer to dest, or NULL on failure
*/
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
int a, b, mul, mulrem, sum, sumrem;
mulrem = sumrem = 0;
for (a = num_index, b = dest_index; a >= 0; a--, b--)
{
mul = (n - '0') * (num[a] - '0') + mulrem;
mulrem = mul / 10;
sum = (dest[b] - '0') + (mul % 10) + sumrem;
sumrem = sum / 10;
dest[b] = sum % 10 + '0';
}
for (sumrem += mulrem; b >= 0 && sumrem; b--)
{
sum = (dest[b] - '0') + sumrem;
sumrem = sum / 10;
dest[b] = sum % 10 + '0';
}
if (sumrem)
{
return (NULL);
}
return (dest);
}
