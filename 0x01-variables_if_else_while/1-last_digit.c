#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *s;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (d > 5)
	{
		s = "and is greater than 5\n";
	}
	else if (d == 0)
	{
		s = "and is 0\n";
	}
	else if (d < 6 && d != 0)
	{
		s = "and is less than 6 and not 0\n";
	}
	printf("Last digit of %d is %d %s", n, d, s);
	return (0);
}
