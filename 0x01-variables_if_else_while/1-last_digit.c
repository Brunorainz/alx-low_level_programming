#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programing is positive, zero, or negative"
 * Return: 0
 */
int main(void)
{
int n;
int lastn;
srand(time(0));
n =  rand() - RAND_MAX / 2;
lastn = n % 10;
if (lastn > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, lastn);
}
else if (lastn == 0)
{
printf("last digit of %d is %d and is 0\n", n, lastn);
}
else
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
