#include "main.h"

/**
  *
  * most_numbers - print numbers from 0 to 14
  *
  * Returns: returns void
  *
  */
void most_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10 )
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		j++;
	}
}
	
