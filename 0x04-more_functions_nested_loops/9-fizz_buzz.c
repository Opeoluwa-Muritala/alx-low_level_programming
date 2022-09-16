#include <stdio.h>

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*
Return: returns 0
*/

int main(void)
{
int num = 0;

while(num++ < 100)
{
if ((num % 3 == 0) && (num % 5 == 0))
{
printf("%d FizzBuzz \n", num);
}
else if (num % 3 == 0)
{
printf("%d Fizz \n", num);
}
else if (num % 5 == 0)
{
printf("%d Buzz");
}
else
{
printf("%d", num);
}
printf("\n");
}
}
