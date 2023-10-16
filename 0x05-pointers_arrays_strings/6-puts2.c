#include "main.h"
/**
* puts2 - function should print other character of a string,
* starting with the first character
* @str: input
* Return: print
*/
void puts2(char *str)
{
int lengh = 0;
int i = 0;
char *j = str;
int k;
while (*j != '\0')
{
j++;
lengh++;
}
i = lengh - 1;
for (k = 0 ; k <= i ; k++)
{
if (k % 2 == 0)
{
_putchar(str[k]);
}
}
_putchar('\n');
}
