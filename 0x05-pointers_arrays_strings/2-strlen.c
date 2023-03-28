#include "main.h"

/**
 * _strlen - calculate the length of a string
 *
 * @s: string to calculate it's length
 *
 * Return: length of the string given
 */

int _strlen(char *s)
{
	int len;

	len = -1;
	while (s[++len])
		;

	return (len);
}
