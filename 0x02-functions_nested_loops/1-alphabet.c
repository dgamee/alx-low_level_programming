#include "main.h"

/**
 * main - print alohabet in lower case followed by a new line
 *
 * Return: print (0) success
 */

int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}

