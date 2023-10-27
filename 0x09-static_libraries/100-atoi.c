#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: string to be converted
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, j, k, lengh, m, integer;
i = 0;
j = 0;
k = 0;
lengh = 0;
m = 0;
integer = 0;
while (s[lengh] != '\0')
lengh++;
while (i < lengh && m == 0)
{
if (s[i] == '-')
++j;
if (s[i] >= '0' && s[i] <= '9')
{
integer = s[i] - '0';
if (j % 2)
integer = -integer;
k = k * 10 + integer;
m = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
m = 0;
}
i++;
}
if (m == 0)
return (0);
return (k);
}
