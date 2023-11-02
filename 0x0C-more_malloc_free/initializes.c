#include "main.h"
/**
* initializes - initializes a string
* @ch: sting to initialize
* @length: length of strinf
* Return: void
*/
void initializes(char *ch, int length)
{
int a;
for (a = 0; a < length; a++)
ch[a] = '0';
ch[a] = '\0';
}
