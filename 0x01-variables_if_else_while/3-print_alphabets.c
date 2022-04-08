#include <stdio.h>
/**
 * main - Responsible for starting the execution and termination
 *
 * Return: returns 0
 */
int main(void)
{
char u;
u = 'A';
/*l = 'a';*/

while (u <= 'Z')
{
putchar(u);
/*putchar(l);*/
}

putchar('\n');
return (0);
}
