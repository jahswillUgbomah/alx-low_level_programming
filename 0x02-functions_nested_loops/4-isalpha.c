#include "main.h"

/**
 * _isalpha - prints lower or uppercase
 * @c: character to check
 * Return: return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
