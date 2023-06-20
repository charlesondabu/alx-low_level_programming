#include "main.h"
/**
 * print_last_digit - function that print last digit
 * @x: parameter
 * Return: int
 */
int print_last_digit(int x)
{
	int l;

	l = x % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
