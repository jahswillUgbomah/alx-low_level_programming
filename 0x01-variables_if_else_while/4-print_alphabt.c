#include <stdio>

/**
 * main - prints all alphabets except e and q
 * Return: return 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != e && != q)
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n);
	return (0);
}
