#include "main.h"

/**
 * main - print alphabet a to z in lowercase
 * print_alphabet prototype
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
