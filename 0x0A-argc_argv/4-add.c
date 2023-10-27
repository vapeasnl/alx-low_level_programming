#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* _isdigit - check numbers beetwen 0 - 9
* @c: char to be checked
* Return: 0 or 1
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
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
* check_isnum - check if the string are digit
* @str: array str
* Return: Always 0 (Success)
*/
int check_isnum(char *str)
{
unsigned int count;
count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}
/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int count;
int str_to_int;
int add = 0;
count = 1;
while (count < argc)
{
if (check_isnum(argv[count]))
{
str_to_int = atoi(argv[count]);
add += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", add);
return (0);
}

