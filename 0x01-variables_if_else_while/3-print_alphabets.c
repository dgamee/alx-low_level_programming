#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing all letters of the alphabet using putchar()
 * letters are printed in lower case
 *
 * Return: program returns 0
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
