#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints n elements of an array
 * @a: parameter to evaluate
 * @n: second parameter
 * Return: the length of the string
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
