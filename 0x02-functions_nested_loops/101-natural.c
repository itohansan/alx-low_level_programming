#include "main.h"
#include <stdio.h>

/**
 * main -main block
 * Description - sum of a ll multiples of 3
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 10240)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum +=c;
		}

		c++
	}
	printf("%i\n", sum);
	return (0);
}
