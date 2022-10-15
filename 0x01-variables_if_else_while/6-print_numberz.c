#include <stdio.h>

/**
* main - print single digit numbers
* Desciption: print single digit numbers
* Return: Always (0)
*/

int main(void)
{
	int p;

	p = 48;

	while (p < 58)
{
	putchar(p);
	p++;
}

	putchar(10);

	return (0);
}
