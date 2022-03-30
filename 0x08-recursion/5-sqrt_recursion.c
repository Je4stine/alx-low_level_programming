#include "main.h"

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number to find the square root of
 * sqr_con - return 
 * Return: square root of n
 */

int sqr_con(int n, int i)
{
	if (n == i * i)
		return (i);

	else if (n < i * i)
		return (-1);

	return (sqr_con(n, i + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: number to square
 * Description: find square root of n using recursion
 * sqr_con - return 
 * Return: square root of n or -1 if none
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqr_con(n, 0));
}
