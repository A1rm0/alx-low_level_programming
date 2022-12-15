#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: number oflines
 * Return: no return
 */
void print_triangle(int size)
{
	int i, j;

	while (i <= size && size > 0)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++
		}
		_putchar('\n');
		i++
	}
	if (i == j)
		_putchar('\n');
}
