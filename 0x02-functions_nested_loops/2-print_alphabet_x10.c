#include "main.h"
/**
 * print_alphabet_x10 - prints all lowercase alphabets 10 times 
 */

void print_alphabet_x10(void)
{
int i = 0, j;

for (i < 10)
{

for (j = 97; j < 123; j++)
{
_putchar(j);
}

}
_putchar('\n');
}
