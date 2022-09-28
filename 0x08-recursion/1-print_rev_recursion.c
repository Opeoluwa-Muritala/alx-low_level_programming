#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print reverse string
 * @s: string to reverse
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
s = strrev(*s);
_putchar(s);
_print_rev_recursion(s);
}
else
{
_putchar('\n');
}
}
