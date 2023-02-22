#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10
 * Return 0 success.
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'Z')
		{
		_putchar(ch);
		ch++;
		}
		_putchar('\n');
	}
}
