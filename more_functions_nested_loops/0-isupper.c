#include <main.h>

	/**
	*Write a function that checks for uppercase character.
	*
	*  Prototype: int _isupper(int c);
	*  Returns 1 if c is uppercase
	*  Returns 0 otherwise
	*
	*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
	}
