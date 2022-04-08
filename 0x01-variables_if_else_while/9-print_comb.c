#include <stdio.h>
/**
 * main - Responsible for starting the execution and termination
 *
 * Return: returns 0
 */
int main(void)
{
int i;

while (i<10)
{
putchar(48 + i);
	
	if (i != 9) 
	{
	putchar(',');
	putchar(' ');
	}

}
putchar('\n');
return (0);
}
