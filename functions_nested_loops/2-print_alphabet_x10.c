#include "main.h"


/**
 *print_alphabet_x10 - Print ten times the alphabet in lowercase
 */

void print_alphabet_x10(void)

{
char gothroughletter;
int countletter;

	for (countletter = 0; countletter < 10; countletter++)
	{
		for (gothroughletter = 'a'; gothroughletter <= 'z'; gothroughletter++)

		{
		_putchar(gothroughletter);
		}



	_putchar('\n');
	}

}

