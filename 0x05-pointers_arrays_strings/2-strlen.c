#include "main.h"
/**
 * _strlen -function that returns the length of a string
 * @s: string
 * Return: returns lenteh of a string
 */

int _strlen(char *s)
{
int c = 0;
while (*(s + c) != '\0')
{
c++;
}
return (c);
}
