#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - a program that generates random valid passwords for the program
* 101-crackme
* Return: Always 0 (Success)
*/
int main(void)
{
int pwd[100];
int a, b, c;
b = 0;
srand(time(NULL));
for (a = 0; a < 100; a++)
{
pwd[a] = rand() % 78;
b += (pwd[a] + '0');
putchar(pwd[a] + '0');
if ((2772 - b) - '0' < 78)
{
c = 2772 - b - '0';
b += c;
putchar(c + '0');
break;
}
}
return (0);
}
