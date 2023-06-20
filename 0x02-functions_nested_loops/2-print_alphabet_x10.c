#include "main.h"
/**
 * print_alphabet_x10 - function that print 10 x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 10;

	while (j > 0)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j--;
	}
}
