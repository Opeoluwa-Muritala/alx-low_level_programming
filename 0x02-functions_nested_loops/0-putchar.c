#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char c[8] = {"_","p","u","t","c","h","a","r"};

int _putchar(c)
{
return (write(1, c, 1));
}
#include "main.h"

/**
 * main - print putchar
 * Return: always 0
 */

int main(void)
{
_putchar(c);
return (0);

}
