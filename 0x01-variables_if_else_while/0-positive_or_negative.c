#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if the number is positive,negtive or 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand()n - RAND_MAX / 2;

	if (n > 0)
	{
		printf("and is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}

