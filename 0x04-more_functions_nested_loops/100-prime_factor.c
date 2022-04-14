#include <stdio.h>

/**
 * main - prints the largest prime factor
 * Return: returns 0
 */

int main(void)
{
long int i, lpf;
i = 612852475143;

for (lpf = 2; lpf <= i; lpf++)
{

if (i % lpf == 0)
{
i /= lpf;
lpf--;
}

}
printf("%ld\n", lpf);
return (0);
}
