#include "main.h"

/**
 * print_Alphabet - print a to z
 *
 */

void print_alphabet(void)
{
	int a;

	a = 97;
	while (a <= 122)
		_putchar(a++);
	_putchar('\n');
}
