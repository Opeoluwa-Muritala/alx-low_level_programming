#include "main.h"
#include <stdlib>
#include <stdio.h>

/**
 * main - Prints the minimum number of coins
 * to make change
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0,1
 */


int main(int argc, char *argv[])
{
int j, change, cents;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

change = atoi(argv[1]);
cents = 0;

if (num < 0)
{
printf("0\n");
return (0);
}

for (j = 0; j < 5 && num >= 0; j++)
{
while (num >= coins[j])
{
cents++;
change -= coins;
}
}
printf("%d\n", cents);
return (0);
}
