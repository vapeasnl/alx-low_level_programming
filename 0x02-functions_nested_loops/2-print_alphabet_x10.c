#include "main.h"
/**
* print_alphabet_x10 -  10 times the alphabet, in lowercase,
*/
void print_alphabet_x10(void)
{
char alpha;
int j;
j = 0;
while (j < 10)
{
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
j++;
}
}
