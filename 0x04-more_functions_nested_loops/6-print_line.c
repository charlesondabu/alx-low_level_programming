#include "main.h"
/**
 * print_line - draws a line
 * @n: line lenght
 * Returns: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
