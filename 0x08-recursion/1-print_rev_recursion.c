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
_putchar("%s\n",strrev(s));
_print_rev_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
