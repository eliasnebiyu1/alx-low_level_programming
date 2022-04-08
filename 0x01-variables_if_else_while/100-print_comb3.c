#include <stdio.h>
/**
 * main - Responsible for starting the execution and termination
 *
 * Return: returns 0
 */
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
	for (j = i + 1; i <= 57; j++)
	{
	putchar(i);
	putchar(j);
		if (i < 56 && j < 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
}
putchar('\n');
return (0);

}
