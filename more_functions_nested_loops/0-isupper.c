#include "main.h"
/**
 * _isupper - check the character in c
 * @c: character being check)
 *
 * Return: 1 if uppercase, else 0
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
