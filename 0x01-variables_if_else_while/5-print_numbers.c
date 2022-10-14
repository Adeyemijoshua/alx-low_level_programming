#include <stdio.h>

/**
* main - print single digit numbers
* Descripton: print single digit numbers
* Return: Always (0)
*/

int main(void)
{
	int v;

	v = 48;

	while (v < 58)
{
	putchar(v);
	v++;
}

	putchar(10);

	return (0);
}
