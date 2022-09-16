#include "main.h"

/**
 *print_last_digit - returns the value of the last number
 *@n: character to check
 *Return: return 0
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
