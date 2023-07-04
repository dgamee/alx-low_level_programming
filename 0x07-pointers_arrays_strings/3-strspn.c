#include <string.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer of s
 * @accept: pointer of string charset
 * Return: returns the number of characters spanned
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
