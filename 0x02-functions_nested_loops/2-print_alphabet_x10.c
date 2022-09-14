#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 * Return: return 0
 */
void print_alphabet_x10(void)
{
	char a, b;

	for (b = a; b <= 10; b++)
	{
		putchar(b);
		putchar('\n');
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
	}
	putchar('\n');
}
