#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the profram
 * @argc: counts the arguments
 * @argv: arguments
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
