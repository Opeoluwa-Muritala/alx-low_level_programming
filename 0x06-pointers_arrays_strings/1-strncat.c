#include "main.h"


/**
 * _strcat - This uses dest to return a string over src
 *
 *
 * @dest: First parmeter
 * @src: Second parameter
 * @n: Third parameter
 * 
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
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
