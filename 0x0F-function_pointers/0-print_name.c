#include <stdlib.h>
#include "function_pointers.h"


/**
 * print_name - function that prints a name
 * @name: Char pointer containing name to print
 * @f: Function pointer that will print the characters
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{

	if (f == NULL || name == NULL)
		return;

	f(name);
}
