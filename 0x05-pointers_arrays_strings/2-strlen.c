#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Returns: returns length as integer;
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\10')
		len++;
	return (len);
}
