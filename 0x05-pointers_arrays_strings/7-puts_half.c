#include "main.h"
/**
* puts_half - a function that prints half of a string
* followed by a new line
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/
void puts_half(char *str)
{
int i, n, lengh;
lengh = 0;
for (i = 0; str[i] != '\0'; i++)
lengh++;
n = (lengh / 2);
if ((lengh % 2) == 1)
n = ((lengh + 1) / 2);
for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
