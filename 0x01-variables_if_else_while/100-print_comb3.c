#include <stdio.h>

/**
 * main - possible combo
 * Return: Always0
 */
int main(void)
{
	int one;
	int ten;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = '0'; one <= '9'; one++)
			if (!((one == ten) || (ten > one)))
			{
				putchar(ten);
				putchar(one);
				if (!(one == '9' && ten == '8'))
				{
				putchar(',');
				putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
