#include "main.h"

/**
 * is_lower - check whether the char given is lower case
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
