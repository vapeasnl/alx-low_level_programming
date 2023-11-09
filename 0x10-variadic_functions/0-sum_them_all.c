#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n: The number of paramters
* @...: the number to calculate sum
* Return: If n == 0 - 0.
*         Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list y;
unsigned int x, sum = 0;
va_start(y, n);
for (x = 0; x < n; x++)
sum += va_arg(y, int);
va_end(y);
return (sum);
}
