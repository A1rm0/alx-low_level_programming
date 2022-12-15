#include <stdio.h>
/**
 * main - prints fizz and buzz
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);

	for (n = 0; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
		/* code */
	}
	printf("\n");
	return (0);
}
