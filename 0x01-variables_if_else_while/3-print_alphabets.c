#include <stdio.h>
/**
 * main - Responsible for starting the execution and termination
 *
 * Return: returns 0
 */
int main(void)
{
char u, l;
u = 'A';
l = 'a';

while (u <= 'Z' && l<= 'z')
{
putchar(u);
putchar(l);
}

putchar('\n');
return(0);
}
