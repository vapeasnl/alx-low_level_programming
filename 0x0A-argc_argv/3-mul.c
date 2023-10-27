#include "main.h"
#include <stdio.h>
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
/**
* main - a program that multiplies two numbers
* @argc: number of arg
* @argv: array of arg
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int result, n1, n2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
n1 = _atoi(argv[1]);
n2 = _atoi(argv[2]);
result = n1 *n2;
printf("%d\n", result);
return (0);
}
