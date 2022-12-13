#include "main.h"

/**
 * _islower - checks if lower case
 * @c: thecharacter
 * Return: 1 if lower, 0if not
 */
int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
