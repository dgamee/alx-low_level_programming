#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * @c: integer parameter
 *
 * Return: 0
 */

int _islower(int c)
{
	int value;

	if (c >= 'a'; c <= 'z'; c++)
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
