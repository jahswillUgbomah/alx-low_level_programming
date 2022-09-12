#include <stdio.h>

/**
 * main - prints alphabets in reverse
 * Return: always 0
 */
int main(void)
{
	char n;

	for (n = 'z'; n <= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
