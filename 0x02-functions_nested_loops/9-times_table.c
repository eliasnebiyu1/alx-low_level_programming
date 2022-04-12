#include "main.h"
/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
int i, j, op;
for (i = 0; j <= 9; j++)
{
_putchar(48);

for (j = 0; j <= 9; j++)
{
op = i * j;
_putchar(44);
_putchar(32);

if (op <= 9)
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
