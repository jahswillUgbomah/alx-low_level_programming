#include "main"

/**
 * _strlen - returns the length of the strength
 * @s: parameter to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '0')
	{
		i++;
	}
	return (i);


}

