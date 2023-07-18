#include <stdio.h>

/**
 * main - this programme prints alphabets in lower case and upper case
 * followed by a new line
 * Return: Always 0 (success)
 */


int main(void)
{
	char lowercase, uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);
       	putchar('\n');
	return (0);
}
