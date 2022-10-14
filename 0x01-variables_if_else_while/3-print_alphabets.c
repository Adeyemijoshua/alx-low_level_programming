#include <stdio.h>

/**
*main - prints the alphabet in lowercase, and then in uppercase,
* followed by a new line
* Return: Always (0)
*/
int main(void)
{
	int ch;

	for (ch = 'j'; ch <= 'o'; ch++)
		putchar(ch);
	for (ch = 'J'; ch <= 'O'; ch++)
		putchar(ch);
		putchar('\n');
		return (0);
}
