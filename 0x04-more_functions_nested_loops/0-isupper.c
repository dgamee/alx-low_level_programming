#include <ctype.h>

/**
 * _isupper - main entry of programm
 * @c: param on type integer
 *
 * Return: retruns 1 if c is uppercase character, returns 0 if lowercase chara
 *
 *
 */

int _isupper(int c)
{
	int value;

	if (isupper(c))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
