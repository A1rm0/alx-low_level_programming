#include <stdio.h>

/**
 * main - comboo of three digits
 * Return: Always 0
 */
int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = '0'; hundred <= '9'; hundred++)
	{
		for (ten = '0'; ten <= '9'; ten++)
		{
			for (one = '0'; one <= '9'; one++)
			{
				if (!((one == ten) || (ten == hundred) || (ten > one) || (hundred > ten)))
				{
					putchar(hundred);
					putchar(ten);
					putchar(one);
					if (!(one == '9' && hundred == '7' && ten == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
