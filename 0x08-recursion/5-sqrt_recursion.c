#include <math.h>
#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - a function that return the natural square root of a number
 *
 * @n: integer number
 *
 *
 * Return: returns the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
		return (n);

	int start;
	int end = n;
	int result = -1;

	start = 1;

	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (mid * mid == n)
			return (n);
		if (mid * mid < n)
		{
			start = mid + 1;
			result = mid;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (result);
}
