#include <stdio.h>
/**
 * main-entry
 * return: Always
*/
int main(void)
{
	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	prinff("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of a flloat: %i byte(s)\n", sizeof(float));
	return (0);
}
