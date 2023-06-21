#include <stdio.h>
/**
  * main - Execution start here
  *
  * Return: 1 always
  */
int main(void)
{
	int a = 3;
	int b = 5;
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (((i % a) || (i % b)) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n",i);
	return (0);
}
