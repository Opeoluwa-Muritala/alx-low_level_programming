#include "main.h"
#include <string.h>

/**
 * _strcat - This uses dest to return a string over src
 *
 *
 * @dest: First parmeter
 * @src: Second parameter
 * @n: Third parameter
 * description: The _strncat function is similar to the _strcat
 * function, except that
 * it will use at most n bytes from src and
 * src does not need to be null-terminated if it contains
 * n or more bytes
 * Return: dest
 */

char *_strcat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;

while (dest[i] != '\0')
{i++;
}

while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
