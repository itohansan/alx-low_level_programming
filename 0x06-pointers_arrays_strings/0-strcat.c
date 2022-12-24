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
	int i;
	int d;

	i = 0;
	while (dest[i] != "\0")
	{
		i++;
	}
	j = 0;
	while (src[d] != "\0")
	{
		dest[i] = src[d];
		i++;
		d++;
	}
	dest[i] = "\0";
	return (dest);
}
