#include "main.h"

/**
 * main - prints Fizz for multiples of 3 and Buzz for multiples of 5
 * Return: 0
 */

int main(void)
{
int i = 1;

printf("%d", n);
for (i = 2; i <= 100; i++)
{

if (n % 3 == 0)
{
printf("Fizz");
}

else if (n % 5 == 0)
{
printf("Buzz");
}

else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}

else
{
printf("%d", n);
}

}
printf("\n");
return (0);
}
