#include <stdio.h>

/**
 * main - takes in print function
 * Return: return 0
 */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
}

/**
 * print_alphabet_x10 - prints alphabets 10 times. no return
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