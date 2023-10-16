#include "main.h"
/**
* rev_string - string to reverse
* @s: Input string
* Return: reverse
*/
void rev_string(char *s)
{
char reverse = s[0];
int j = 0;
int i;
while (s[j] != '\0')
j++;
for (i = 0; i < j; i++)
{
j--;
reverse = s[i];
s[i] = s[j];
s[j] = reverse;
}
}
