#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * int _strlen(char *s)
 * Return String (s)
 *
 *
 */
int _strlen(char *s)
{
int s = 0;
for (; *s != '\0'; s++)
{
s++;
}
return (s);
}
