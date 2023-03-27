#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: Pointer to  first number
 * @b: Pointer to second number
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
