#include <main.h>
/**
 * print_putchar - Prints string
 * @str: parameter value
 */
void print_putchar(const char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
/**
 * print_newLine - prints new line
 */
void print_newLine(void)
{
	putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *s = "_putchar";

	print_putchar(s);
	print_newLine();
	return (0);
}
