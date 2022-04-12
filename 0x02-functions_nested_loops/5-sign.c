#include "main.h"
/**
 * print_sign - returns 1 and prints + if n is greater than 0, eturns 0 and prints 0 if n is zero and returns -1 and prints - if n is less than zero
 *
 * Return: r
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}

else if (n = 0)
{
_putchar(48);
return (0);
}

else
{
_putchar(45);
return (-1);
}
_putchar('\n');
}
