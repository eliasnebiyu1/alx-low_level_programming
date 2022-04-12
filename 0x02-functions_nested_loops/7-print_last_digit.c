#include "main.h"
/**
 * print_last_digit - prints absolute value of numbers 
 *
 * @n: stores values
 *
 * Return: returns last digit
 */

int print_last_digit(int n)
{
int ld;
ld = n % 10;

if (ld < 0)
{
_putchar(ld + 48);
return (ld);
}

else
{
_putchar(ld - 48);
return (-ld);
}

_putchar('\n');
}
