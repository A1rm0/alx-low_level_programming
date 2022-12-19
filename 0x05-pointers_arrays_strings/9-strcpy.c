#include "main.h"

/**
 * char *_strcpy - Copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int si = 0;
	int di = 0;

	while (*(src + si) != '\0')
	{
		si++;
	}
	for ( ; di < si ; di++)
	{
		dest[di] = src[di];
	}
	dest[si] = '\0';
	return (dest);
}
