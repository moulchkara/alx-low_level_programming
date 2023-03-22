#include "main.h"

/**
 * print_last_digit - Prints last digit of the number given
 *
 * @n: the number given
 *
 * Return: returns the value of the last digit
 */

int print_last_digit(int n)
{
	long long int x;

	x = n
	if (x < 0)
		x = x * -1;
	_putchar('0' + (x % 10));
	return (x % 10);
}
