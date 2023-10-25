#include "main.h"
/**
* is_present_prime - calculates if a number is prime recursively
* @n: number to evaluate
* @x: iterator
* Return: 1 if n is prime, 0 if not
*/
int is_present_prime(int n, int x)
{
if (x == 1)
return (1);
if (n % x == 0 && x > 0)
return (0);
return (is_present_prime(n, x - 1));
}
/**
* is_prime_number - a function that returns 1
* if the input integer is a prime number,
* otherwise return 0
* @n: number to evaluate
* Return: 1 if n is a prime number, 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_present_prime(n, n - 1));
}
