#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: input string
 * Return: print evey character
 */
void puts2(char *str)
{
	int i = 0;
	int temp = 0;
	char *y = str;
	int out;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	temp = i - 1;
	for (out = 0 ; out <= temp ; out++)
	{
		if (out % 2 == 0)
	{
		_putchar(str[out]);
	}
	}
	_putchar('\n');
}
