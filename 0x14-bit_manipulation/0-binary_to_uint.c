#include "main.h"
/**
* binary_to_uint - a function that converts
* a binary number to an unsigned int.
* @b: is pointing to a string
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int n;
n = 0;
if (!b)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
n <<= 1;
if (b[i] == '1')
n += 1;
}
return (n);
}
