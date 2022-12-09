#include <stdio.h>
#include <stdlib.h>

/**
 * main - stillComboOfaNuber
 * Return: return 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			putchar((1 / 10) + 48);
			puchar((1 % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48) + 48);
			putchar((j / 10) + 48) + 48);
			if (i != 98 || j != 90)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

