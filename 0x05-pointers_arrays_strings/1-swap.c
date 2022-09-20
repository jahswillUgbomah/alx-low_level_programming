#include "main.h"

/**
 * swap_int - swaps the integer a for b
 * @a: first parameter
 * @b: secoond parameter
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

