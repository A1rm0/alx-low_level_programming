#include "main.h"
/**
 *create_array - array of chars
 *@size: numb of items in array
 *@c: char
 *Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char *buff;
unsigned int pos;

if (size == 0)
{
return (NULL);
}


buff = (char *) malloc(size * sizeof(c));

if (buff == 0)
{
return (NULL);
}

else
{
pos = 0;
while (pos < size)
{
*(buff + pos) = c;
pos++;
}

return (buff);
}

}
