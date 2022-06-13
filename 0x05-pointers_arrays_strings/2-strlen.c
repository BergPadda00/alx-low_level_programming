#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * int _strlen(char *s)
 * Return Always 0
 *
 *
 */
int _strlen(char *s)
{
int len;
for (len = 0; *s != '0\'; len++)
{
s++;
}
return (len);
}
