#include "main.h"

/**
 * factorial - factorial
 * @n: int
 *
 * Return: int
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
