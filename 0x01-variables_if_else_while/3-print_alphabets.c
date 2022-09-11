#include <stdio.h>

/**
 * main - prints both lower and upper case of the alphabets
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
