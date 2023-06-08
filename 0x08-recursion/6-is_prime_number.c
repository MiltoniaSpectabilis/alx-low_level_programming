#include "main.h"

int _is_prime_helper(int n, int i);

/**
 * is_prime_number - checks if a given number is prime
 * @n: the input number
 *
 * Return: int - 1 if the number is prime, or
 *               0 if the number is not prime
 *
 * This function checks if a given number n is prime by calling
 * the helper function _is_prime_helper. If n is less than or
 * equal to 1, it returns 0.
 */

int is_prime_number(int n)
{
	return (_is_prime_helper(n, 2));
}

/**
 * _is_prime_helper - checks if a number is prime using recursion
 * @n: the input number
 * @i: the current integer to check if it divides n
 *
 * Return: int - 1 if the number is prime, or
 *               0 if the number is not prime
 *
 * This helper function is called by is_prime_number and recursively
 * checks if a given number n is prime. If a divisor is found, it
 * returns 0; otherwise, it returns 1 when i reaches n.
 */

int _is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);

	else if (n == i)
		return (1);

	else if (n % i == 0)
		return (0);

	else
		return (_is_prime_helper(n, i + 1));
}
