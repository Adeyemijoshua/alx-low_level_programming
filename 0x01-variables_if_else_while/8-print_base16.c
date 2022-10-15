#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Descripton:  prints all the numbers of base 16 in lowercase.
* Return: Always (0)
*/

int main(void)
{
	int j;
	char low;

	for (j = '0'; j <= '9'; j++)
	putchar(j);
	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
