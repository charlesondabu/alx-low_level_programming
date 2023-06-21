#include "main.h"

/**
  * print_times_table - Prints the 9 times table, starting with 0
  * @n: number of times to print
  * Return: empty output
  */
void print_times_table(int n)
{
	int a, b, c, u, d;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;

			if (c > n)
			{
				u = c % 10;
				d = (c - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(c + '0');
			}
		}

		_putchar('\n');
	}
}
