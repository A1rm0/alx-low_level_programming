#include "main.h"
/**
 * print_line - prints line n times
 * @n: numberof times line is going to be printed
 * Return: noreturn
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
