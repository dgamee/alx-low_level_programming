#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - function that compares two string
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 0 if s1 and s2 are equal, -ve when s1 < s2, +ve s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
