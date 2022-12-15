#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the number picked
 * Return: 0
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("i,", n);
		n++;
	}
	while (n > 98)
	{
		pricef("%i,", n);
		n--;
	}
	printf("98");
	putcher('\n');
}
