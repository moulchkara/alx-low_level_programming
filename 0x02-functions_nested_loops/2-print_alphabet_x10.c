#include "main.h"

/**
 * print_alphabet_x10 - print a to z 10 times
 *
 */

void print_alphabet_x10(void)
{
	int a;
	int i;

	i = 0;
	while (i++ < 10)
	{
		a = 97;
		while (a <= 122)
			_putchar(a++);
		_putchar('\n');
	}
}
