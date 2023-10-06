#include <stdio.h>
/**
* main - alphabet lowercase,
* followed by a new line,
* except q and e
* Return: Aways 0 (Sucess)
*/
int main(void)
{
char x = 'a';
while (x <= 'z')
{
if (x != 'e' && x != 'q')
{
putchar(x);
}
x++;
}
putchar('\n');
return (0);
}
