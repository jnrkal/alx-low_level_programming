#include "main.h"

/**
 * _islower - check for lower case letter
 * @c: character for checking
 * Return: 1 if char is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	
	else
	return (0);
}
