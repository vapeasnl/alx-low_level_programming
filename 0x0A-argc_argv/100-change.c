#include <stdio.h>
#include <stdlib.h>
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
/**
* main - a program that prints the minimum number
* of coins to make change for an amount of money
* @argc: number of arg
* @argv: array of arg
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int n, i, output;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
n = atoi(argv[1]);
output = 0;
if (n < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5 && n >= 0; i++)
{
while (n >= coins[i])
{
output++;
n -= coins[i];
}
}
printf("%d\n", output);
return (0);
}
