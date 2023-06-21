#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 *
 * @i: parameter of a type integer
 *
 * Return: Returns the last digit of i
 */

int print_last_digit(int i)
{
	int c;

	c = i % 10;
	if (i < 0)
	{
		c = abs(i);
	}
	return (c);
}
