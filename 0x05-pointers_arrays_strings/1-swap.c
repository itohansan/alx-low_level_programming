#include "main.h"

/**
 *  main - check the code
 *  swab_int - swabs function of two integers
 *  @a: first integer
 *  @b: second integer
 *
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b =swap;
}
