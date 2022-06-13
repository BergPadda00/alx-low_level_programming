#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return void
 */
void rev_string(char *s)
{
int i, j;
char a[999];
i = 0;
j = 0;
while (*(s + i))
{
*(a + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(a + j);
j++;
i--;
}
}

