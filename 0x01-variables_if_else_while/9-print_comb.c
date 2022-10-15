#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Return: Always (0)
* Description:prints all possible combinations of single-digit numbers.
*/

int main(void)
{
	int j;

	for (j = '0'; j <= '7'; j++)
{
	putchar(j);
	if (j != '7')
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');

	return (0);
}
