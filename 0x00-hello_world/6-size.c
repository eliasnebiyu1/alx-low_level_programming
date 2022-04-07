#include<stdio.h>
/**
 * main - responsible for execution and termination of the program
 *
 * Return: returns 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %lu.\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu.\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu \n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu \n", (unsigned long)sizeof(d));
printf("Size of a float: %lu \n", (unsigned long)sizeof(e));

return (0);
}
