#include "main.h"

/*
 * create_array - creating array
 * @size: number elements array
 * @c: character 
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/*Define Valueswith malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
	return (NULL);
}
else
{
position = 0;
while (position < size) /*while for array*/
{
*(buffer + position) = c;
position++;
}

return (buffer);
}
