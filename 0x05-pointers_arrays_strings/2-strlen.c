#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * int _strlen(char *s)
 * Return String 0
 *
 *
 */
int _strlen(char *s)
{
int x = 0;
for (; *s != '\0'; s++)
{
x++;
}
return (x);
}
