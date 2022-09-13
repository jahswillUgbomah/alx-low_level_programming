#include <stdio.h>

/**
 * main - takes in print alphabet function
 * Description: the print_alphabet returns void but is the main function here
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints lower case alphabets. no return
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
