#include "main.h"

/**
 * _isupper - check the code.
 * @c: An input value
 * Description:: A function that checks for uppercase character.
 * Return: 1 if c is uppercase and 0 otherwise
 */


int _isupper(int c)
{
if (c >= 65 && c < 91)
{
	return (1);
}
else
{
	return (0);
}
}
