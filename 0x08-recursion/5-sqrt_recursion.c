#include "main.h"

int _sqrt_helper(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the input number
 *
 * Return: int - the natural square root of n, or
 *               -1 if n does not have a natural square root
 *
 * This function finds the natural square root of a number n by
 * calling the helper function _sqrt_helper with initial value 1.
 */

int _sqrt_recursion(int n)
{
    return _sqrt_helper(n, 1);
}

/**
 * _sqrt_helper - calculates the square root using recursion
 * @n: the input number
 * @i: the current integer to check if it is the square root of n
 *
 * Return: int - the natural square root of n, or
 *               -1 if n does not have a natural square root
 *
 * This helper function is called by _sqrt_recursion and recursively
 * computes the square root of a number n or returns -1 if there is
 * no natural square root for n.
 */

int _sqrt_helper(int n, int i)
{
    if (i * i == n)
        return i;

    if (i * i > n)
        return -1;

    return _sqrt_helper(n, i + 1);
}
