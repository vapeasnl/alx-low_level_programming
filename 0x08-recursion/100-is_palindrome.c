#include "main.h"
/**
* _strlen_recurse - returns the length
* @s: string to calculate the length
* Return: length of the string
*/
int _strlen_recurse(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlength_recurse(s + 1));
}
/**
* check_palindrome - checks the characters recursively
* @s: string to check
* @x: iterator
* @length: length of the string
* Return: 1 if palindrome, 0 if no
*/
int check_palindrome(char *s, int x, int length)
{
if (*(s + x) != *(s + length - 1))
return (0);
if (x >= length)
return (1);
return (check_pal(s, x + 1, length - 1));
}
/**
* is_palindrome - a function that returns 1 if a string
* is a palindrome and 0 if not
* @s: string to reverse
* Return: 1 if it is, 0 it's not
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_palindrome(s, 0, _strlength_recurse(s)));
}
