#include "main.h"

/**
 * _isalpha - check for alphabetic character
 *
 * @c : an argument
 *
 */

int _isalpha(int c)
{
	int value;

	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}

	return (value);
}
