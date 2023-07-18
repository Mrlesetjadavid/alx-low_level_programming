#include <stdio.h>
/**
 *  main - this programme print lower case alphabets
 *  followed by new line 
 *  Return: Always 0 (success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	putchar('\n');
	return (0);
}
