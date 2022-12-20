#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: Pointer to a string
 *
 * Return: void;
 */

int _atoi(char *s)
{
	int m;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	m = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			m *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * m);
}
