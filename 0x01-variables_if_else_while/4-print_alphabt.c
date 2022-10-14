#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Description: prints alphabets in lower case
* Return: Always (0)
*/

int main(void)
{
	int i = 97;

	while (i < 123)
{
	if (i != 101 && i != 113)
{
	putchar(i);
													}
	i++;
}
	putchar(10);

	return (0);
}

