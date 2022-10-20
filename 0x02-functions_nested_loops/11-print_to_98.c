#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Check main
 * @n: input integer
 * Description: Function that prints natural numbers
 * from n to 98
 * Return: nothing
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%i, ", n);
n++;
}
while (n > 98)
{
printf("%i, ", n);
n--;
}
printf("98");
putchar('\n');
}
