#include "main.h"

/**
 * _abs - transform a number to it's absolute value
 *
 * @n: the number given to absolute it
 *
 * Return: returns the absolute value of the number given
 */

int _abs(int n)
{
	if(n < 0)
		n = -n;
	return (n);
}
