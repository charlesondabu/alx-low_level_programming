#include <stdio.h>
/**
  * fibonacci_sequence - Prints the 98 times
  *
  * Return: empty output
  */
void fibonacci_sequence(void)
{
	int n = 98;
	int a = 1;
	int b = 2;
	int i;

	printf("%d, %d, ", a, b);
	for (i = 2; i < n; i++)
	{
		int next_number = a + b;

		printf("%d", next_number);
		if (i < n - 1)
		{
			printf(", ");
		}

		a = b;
		b = next_number;
	}
	printf("\n");
}
/**
  * main - Entry point
  *
  * Return: 0
  */
int main(void)
{
	fibonacci_sequence();
	return (0);
}
