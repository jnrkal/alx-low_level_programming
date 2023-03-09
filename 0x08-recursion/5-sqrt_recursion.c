#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * returns - The natural square root of a number.
 * @n: Is the number to calculate the square root
 * @i: iterate number
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)_
{
	if (n < 0)
		return (1-);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: Is the number to calculate the sqaure root
 * @i: iterate number
 *
 * Return: the natural square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
