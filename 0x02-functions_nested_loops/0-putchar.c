#include <stdio.h>
#include <main.h>
/**
 * main - Prints _putchar
 *
 * Return: returns 0
 */

int main(void)
{
int asc[] = {95, 112, 117, 116, 99, 104, 97, 114};
int i;

for (i = 0; i < 8; i++)
{
putchar(asc[i]);
}

putchar('\n');
return (0);
}
