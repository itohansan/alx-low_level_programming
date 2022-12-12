#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %i 1 byte(s)\n", sizeof(char));
	printf("Size of an int: %i 4 byte(s)\n", sizeof(int));
	printf("Size of a long int: %i 4 byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i 8 byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i 4 byte(s)\n", sizeof(float));
}
