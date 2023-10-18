#include "main.h"
#include <stdio.h>
/**
* rot13 - a function that encodes a string using rot13.
* @str: pointer to string paramettre
*
* Return: *str
*/
char *rot13(char *str)
{
int a;
int b;
char info1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char inforot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (a = 0; str[a] != '\0'; a++)
{
for (b = 0; b < 52; b++)
{
if (str[a] == info1[b])
{
str[a] = inforot[b];
break;
}
}
}
return (str);
}
