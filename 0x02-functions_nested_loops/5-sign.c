#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number whose sign will be printed
 * Return: 1 if n > 0, 0 if n ++ 0, and -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		}
	return (-1);
}
