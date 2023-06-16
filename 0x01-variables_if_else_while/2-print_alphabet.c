#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "abcdefghijklmnopqrsuvwzyz";
	int i;
	int len = (int)strlen(str);

	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
