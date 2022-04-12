#include "main.h"
/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
int i, j, op;

for (i = 0; i < 10; i++)
{
_putchar(48);

for (j = 1; j < 10; j++)
{
op = i * j;
_putchar(44);
_putchar(32);

if (op < 10)
{
_putchar(32);
_putchar(op + 48);
}

else
{
_putchar((op / 10) + 48);
_putchar((op % 10) + 48);
}

}
_putchar('\n');
}

}
