#include "main.h"
/**
 * _abs - function that print 10 x
 * @d: parameter
 * Return: void
 */
int _abs(int d)
{
	if (d < 0)
	{
		int abc_val;

		abc_val = d * -1;
		return (abc_val);
	}
	return (d);
}
