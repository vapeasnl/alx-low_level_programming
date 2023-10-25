#include "main.h"
/**
* present_sqrt_recursion - recurses to find the natural
* square root of a number actual
* @n: number to calculate the sqaure
* @x: iterator
* Return: the resulting square root
*/
int present_sqrt_recursion(int n, int x)
{
if (x * x > n)
return (-1);
if (x * x == n)
return (x);
return (present_sqrt_recursion(n, x + 1));
}
int present_sqrt_recursion(int n, int x);
/**
* _sqrt_recursion - function that returns
* the natural square root of a number
* @n: number to calculate the square root
* Return: the resulting square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (present_sqrt_recursion(n, 0));
}
