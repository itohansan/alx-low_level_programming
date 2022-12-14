#include "main.h"

/**
 * _islower - pick lowercase char
 * @c: char to br checked
 * Return: 1 if char is lower, else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
