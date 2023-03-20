#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Tells whether the last digit "n" is greater than 5 or less than 6 or 0
 *
 * Return: 0 (success).
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last == 0)
		printf("Last digit of %d is %d %s\n", n, last, "and is 0");
	else if (last < 6)
		printf("Last digit of %d is %d %s\n", n, last, "and is and is less than 6 and not 0");
	else
		printf("Last digit of %d is %d %s\n", n, last, "and is greater than 5");

	return (0);
}
