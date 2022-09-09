#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of achar: %zu bytes(s)\n", sizeof(char));
printf("Size of anint: %zu bytes(s)\n", sizeof(int));
printf("Size of along int: %zu bytes(s)\n", sizeof(long int));
printf("Size of along long int: %zu bytes(s)\n", sizeof(long long int));
printf("Size of afloat: %zu bytes(s)\n", sizeof(float));
return (0);
}
