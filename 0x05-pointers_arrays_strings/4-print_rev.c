#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line, to stdout
 *
 * @s: string to print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;

	while (--i >= 0)
		_putchar(s[i]);
	_putchar('\n');
}
