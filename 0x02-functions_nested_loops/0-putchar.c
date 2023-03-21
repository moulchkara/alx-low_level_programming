#include <stdio.h>

/**
 * main - Entry point of the programme
 *
 * Description: Prints "_putchar"
 *
 * Return : 0 (success)
 */

int main(void)
{
	char *str;
	int i;
	
	str = "_putchar\n";
	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
