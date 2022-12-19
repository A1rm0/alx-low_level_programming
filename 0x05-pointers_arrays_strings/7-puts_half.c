
#include "main.h"
/**
 * puts_half - prints half of i string
 * @str: input string
 * Return: half string
 */
void puts_half(char *str)
{
	int i, mid, length;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	mid = (length / 2);

	if ((length % 2) == 1)
		mid = ((length + 1) / 2);

	for (i = mid; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
