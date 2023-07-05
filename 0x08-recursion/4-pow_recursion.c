#include <math.h>
#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised to power of y
 * @x: int number
 * @y: int number
 *
 * Return: retuns value of x^y
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (pow(x, y));
}
