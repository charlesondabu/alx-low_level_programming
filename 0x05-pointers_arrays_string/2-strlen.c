#include "main.h"

/**
 * _strlen - checks lenght of a string
 * @s: string to find length
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}

