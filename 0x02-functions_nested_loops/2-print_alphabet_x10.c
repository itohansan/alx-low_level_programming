#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int count;
	char letter;

	while (count++ <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
