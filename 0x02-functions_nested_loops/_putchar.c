#include <unistd.h>
/*
 * _putchar -  prints stream of characters
 * @s: parameter value
 * Return: success on 1
 */
 int _putchar(char s)
 {
	 return (write(1, &s, 1));
 }

