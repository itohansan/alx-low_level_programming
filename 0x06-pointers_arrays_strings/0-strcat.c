#main.h

/**
 * _strcat - concatenates strings pointed to
 * @src to the string end pointed to by @dest
 * @dest: string that will be appended
 * @src: concatenated string
 *
 * Return: return to @dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}
