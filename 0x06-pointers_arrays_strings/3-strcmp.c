#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: first pointer
 * @s2: second pointer
 * Return: the difference of the two
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}

return (*s1 - *s2);
}
