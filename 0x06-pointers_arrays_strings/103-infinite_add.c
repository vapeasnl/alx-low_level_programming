#include "main.h"
/**
* rev_string - reverse array
* @n: integer params
* Return: 0
*/
void rev_string(char *n)
{
int a = 0;
int b = 0;
char tmp;
while (*(n + a) != '\0')
{
a++;
}
a--;
for (b = 0; b < a; b++, a--)
{
tmp = *(n + b);
*(n + b) = *(n + a);
*(n + a) = tmp;
}
}
/**
* infinite_add - a function that adds two numbers
* @n1: number 1
* @n2: number 2
* @r:  is the buffer
* @size_r: is the buffer size
* Return: calling function
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int oflow = 0, a = 0, b = 0, num = 0;
int v1 = 0, v2 = 0, tmp_sum = 0;
while (*(n1 + a) != '\0')
a++;
while (*(n2 + b) != '\0')
b++;
a--;
b--;
if (b >= size_r || a >= size_r)
return (0);
while (b >= 0 || a >= 0 || oflow == 1)
{
if (a < 0)
v1 = 0;
else
v1 = *(n1 + a) - '0';
if (b < 0)
v2 = 0;
else
v2 = *(n2 + b) - '0';
tmp_sum = v1 + v2 + oflow;
if (tmp_sum >= 10)
oflow = 1;
else
oflow = 0;
if (num >= (size_r - 1))
return (0);
*(r + num) = (tmp_sum % 10) + '0';
num++;
b--;
a--;
}
if (num == size_r)
return (0);
*(r + num) = '\0';
rev_string(r);
return (r);
}
