#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: 1st param
 * @b: 2nd param
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

