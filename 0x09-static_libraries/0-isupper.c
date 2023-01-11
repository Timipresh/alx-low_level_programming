#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input.
 * Return: 1 if c is an uppercase character and 0 in otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
