#include <stdio.h>
/**
 * main - this programme print all the numbers with base 10
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48, n < 58, n++)
		putchar(n);
	putchar('\n');
	return (0);
}
