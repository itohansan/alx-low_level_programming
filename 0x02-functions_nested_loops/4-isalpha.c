#include "main.h"

/**
 * _isalpha - test for lowercase or upper
 * @c: char we are testing
 * Return: 1 if char is lower or upper
 */
int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A' && c <= 'z' || c <= 'Z';)
		return (1);
	else
		return (0);
}
