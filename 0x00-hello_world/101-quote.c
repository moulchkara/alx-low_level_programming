#include <unistd.h>

/**
 *main - Entry Point for the program
 *
 *Description: Prints a quote to STDERR
 *
 *Return: 1
 */

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int i = 0;

	while (str[i])
		i++;

	write(2, str, i);

	return (1);
}

