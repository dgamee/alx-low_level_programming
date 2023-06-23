#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: parameter of type int
 *
 * Return: returns 1 if its a digit and 0 if its not
 */

int _isdigit(int c)
{
	int value;

	if (c >= '0' && c <= '9')
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
