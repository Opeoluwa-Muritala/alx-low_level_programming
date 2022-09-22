#include "main.h"

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
strncat(dest, src, n);
return (dest);
}
