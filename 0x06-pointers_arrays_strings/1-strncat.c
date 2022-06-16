#include "main.h"

/**
 * strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0, length2 = 0;

	while (*(src + i) != '\0')
	{
		++length;
		++i;
	}

	i = 0;

	while (*(dest + i) != '\0')
	{
		dest[i] = *(dest + i);
		++length2;
		++i;
	}

	for (i = 0; i < n; ++i)
		dest[length2 + i] = src[i];

	dest[length2 + n] = '\0';

	return (dest);

}
