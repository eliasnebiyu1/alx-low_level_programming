#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: stores values
 * Return: returns 1 if value is a digit between 0 and 9 otherwise returns 0
 */

int _isdigit(int c)
{

if (c >= 48 && c <= 57)
{
return (1);
}

else
{
return (0);
}

}
