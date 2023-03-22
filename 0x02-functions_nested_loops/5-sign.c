#include "main.h"

/**
 * print_sign - Prints the sign of the number given
 *
 * @n: the number given to check its sign
 *
 * Return: returns 1 if `n` is positive
 *         returns 0 if `n` is 0
 *	   returns -1 if `n` is negative
 */

int print_sign(int n)
{
	if (n >  0)
	{
		_putchar('+');
		return  (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return  (-1);
	}
	else
	{
		_putchar('0');
		return  (0);
	}
}
