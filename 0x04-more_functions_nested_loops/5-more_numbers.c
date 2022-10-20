#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Input number
 * Description: this function prints sign
 * Return: 1 if number is positive,0 if number is 0, or
 * -1 if number is negative
 */

void more_numbers(void)
{
int i, j;

i = 0;

while (i < 10)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
{
_putchar((j / 10) + 48);
}
_putchar((j % 10) + 48);
}

_putchar('\n');

i++;
}
}
