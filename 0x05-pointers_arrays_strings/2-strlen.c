#include "main.h"
/**
 * int _strlen - returns the length of a string
 * @s: string
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
