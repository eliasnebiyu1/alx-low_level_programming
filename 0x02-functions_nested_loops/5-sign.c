#include "main.h"
/**
 * print_sign - checks whether valus are +, - or equal to 0
 *
 * @n: stores input
 *
 * Return: returns +, - or 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}

else if (n == 0)
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
