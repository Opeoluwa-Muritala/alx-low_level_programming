#include "main.h"

/**
 * _puts_recursion - Recurssion
 * Author - Opeoluwa Muritala
 *
 * @s : Store string
 * Description: print string and a new line
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
