#include <stdio.h>
/**
 * main - Responsible for starting the execution and termination
 *
 * Return: returns 0
 */
int main(void)
{
char ul[24] = "abcdfghijklmnoprstuvwxyz";
int i;

for (i = 0; i < 24; i++)
{
putchar(ul[i]);
}

putchar('\n');
return (0);
}
