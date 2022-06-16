#include "main.h"
#include <stdio>

/**
 * leet - function that encodes a string into 1337
 *
 * @c: char pointer to be  converted
 * Return: char pointer with converted string
 */
char *leet(char*)
{
	int i, x;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
	for (x = 0; x <= 9; x++)
	{
	if (n[i] == find[x])
	{
	n[i] = replacer[x / 2];
	x = 9;
	}
	}
	}
	return (n);
}

