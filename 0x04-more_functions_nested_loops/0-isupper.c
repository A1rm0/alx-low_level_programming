#include "main.h"

/**
 * _isupper - checks if it is uppercase
 * @c: input character
 * Return: 1 if upper, 0 if lower or other
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
