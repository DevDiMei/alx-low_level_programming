#include "main.h"
/**
 *factorial - returns factorial of a given number
 *
 *@n: input
 *
 *Return: n < 0 - -1,
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
