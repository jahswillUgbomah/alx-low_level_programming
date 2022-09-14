#include "main.h"

/**
 * print_alphabet - prints alphabets
 * Description: the print_alphabet returns void but is the main function here
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0; i <= 26; i++)
	{
		_putchar(c + i);
	}
	_putchar('\n');
}
