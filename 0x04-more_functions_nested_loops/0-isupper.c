#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @s: parameter value to be checkked
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int s)
{
	if (s >= 'A' && s <= 'Z')
	{
		return (1);
	}
	return (0);
}
