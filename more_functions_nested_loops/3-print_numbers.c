#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9 to stdout
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
}
