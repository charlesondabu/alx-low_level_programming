#include "main.h"
/**
 * print_square - print x size
 * @s: sixe to print
 * Return: void
 */
void print_square(int s)
{
	int a, b;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < s; a++)
		{
			for (b = 0; b < s; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
