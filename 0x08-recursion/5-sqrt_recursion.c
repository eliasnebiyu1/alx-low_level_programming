#include "main.h"

/**
 * sqrt - returns the natural square root of a number
 * @i: input integer
 * @j: counter
 * Return: square root
 */

int sqrt(int i, int j)
{

if (j % (i / j) == 0)
{

if (j * (i / j) == i)
{
return (j);
}

else
{
return (-1);
}
}

return (0 + power_operation(i, j + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 * Return: square root
 */

int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}

else if (n == 0)
{
return (0);
}

else
{
return (1);
}

return (power_operation(n, 2));
}
