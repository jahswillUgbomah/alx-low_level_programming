#include "main.h"

/**
 * print_alphabet - prints alphabets
 * Description: the print_alphabet returns void but is the main function here
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
