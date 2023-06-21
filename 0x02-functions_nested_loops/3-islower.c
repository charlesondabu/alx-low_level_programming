#include "main.h"
/**
* _islower - returns 1 for lower otherwise 0
* @c: parameter
* Return: 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
