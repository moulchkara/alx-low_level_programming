#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: length of the line
 */

void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j++ < i)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n == 0)
		_putchar('\n');
}
