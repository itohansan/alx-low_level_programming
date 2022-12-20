#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 * _puts - writes function that prints out a string, to stdout
 * @str: string
 * _putchar - write a function folowed by new line to stand output
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
