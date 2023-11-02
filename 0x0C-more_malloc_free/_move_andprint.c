#include "main.h"
/**
* _move_andprint - moves a string one place to the left and prints the string
* @ch: string to move
* @size: size of string
* Return: void
*/
void _move_andprint(char *ch, int size)
{
int a, b;
a = b = 0;
while (a < size)
{
if (ch[a] != '0')
b = 1;
if (b || a == size - 1)
_putchar(ch[a]);
a++;
}
_putchar('\n');
free(ch);
}
