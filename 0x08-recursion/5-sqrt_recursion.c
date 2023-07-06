#include <math.h>
#include <stdio.h>
#include "main.h"

/**
 * _sqrt_helper - to help in recursive calculations
 *
 * @start: starting value of the range
 *
 * @end: ending value of the range
 *
 * _sqrt_recursion - a function that return the natural square root of a number
 *
 * @n: integer number
 *
 * Return: returns the square root of n
 */

int _sqrt_helper(int n, int start, int end)
{
	if (start > end)
		/**
		 * no  natural square root found
		 */
		return (-1);
	int mid = start + (end - start) / 2;

	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
}


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}
