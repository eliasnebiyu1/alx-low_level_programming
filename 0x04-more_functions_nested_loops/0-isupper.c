#include "main.h"

/**
 * is_upper - tests whether values are uppercase or not
 * @c: stores values
 * Return: returns 1 if value is uppercase else returns 0
 */

int _isupper(int c)
{

if (c >= 65 && c <= 90)
{
return (1);
}

else
{
return (0);
}

}
