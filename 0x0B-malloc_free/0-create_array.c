#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate memory with malloc
 *
 * @b: size to allocate
 * Return: void
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(c) * size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
