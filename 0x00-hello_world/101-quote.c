#include <stdio.h>

/**
 * main - A program that prints a line
 * followed by a new line, to standar error
 * Return: Always 1
 */

int main(void)
{
	write(2, "and that peice of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
