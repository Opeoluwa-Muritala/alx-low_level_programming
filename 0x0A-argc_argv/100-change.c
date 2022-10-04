#include "main.h"
#include <stdlib.h>
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

if (change < 0)
{
printf("0\n");
return (0);
}

for (j = 0; j < 5 && change >= 0; j++)
{
while (change >= coins[j])
{
cents++;
change =change - *coins;
}
}
printf("%d\n", cents);
return (0);
}
