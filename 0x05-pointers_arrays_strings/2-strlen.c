#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - returns length of character
 * @s: pointer
 * Return: Returns the length of character
 *
 */

int _strlen(char *s)
{
	int len = strlen(s);

	printf("%d\n", len);
	return (len);
}
