#include <stdio.h>
/**
 * main - Prints _putchar
 *
 * Return: returns 0
 */

void print_alphabet(void)
{
int i;

for (i = 97; i < 123; i++)
{
_putchar(i);
}

_putchar('\n');
return (0);
}
