#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %zu bytes(s)\n", sizeof(c));
printf("Size of an int: %zu bytes(s)\n", sizeof(i));
printf("Size of a long int: %zu bytes(s)\n", sizeof(li));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(lli));
printf("Size of a float: %zu bytes(s)\n", sizeof(f));
return (0);
}
