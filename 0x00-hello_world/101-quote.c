#include <unistd.h>

/**
 *main - Entry Point for the program
 *
 *Description: Printsi the size of various types to STDOUT
 *
 *Return: 0
 */

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int i = 0;
	while (str[i])
		i++;

	write(2, str, i);

	return (0);
}

