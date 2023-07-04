#include <string.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string of any set of a set of bytes
 * @s: a pointer to the null terminated string
 * @accept: pointer to the string
 * Return: returns a pointer to the character
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
