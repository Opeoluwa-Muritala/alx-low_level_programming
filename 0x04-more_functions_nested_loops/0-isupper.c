#include <stdio.h>

/**
 * _isupper - Checks for uppercase
 *
 * Description - return 1 if uppercase
 * return 0 if lowercase
 *
 * RETURN:1
 *
 */



int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}


