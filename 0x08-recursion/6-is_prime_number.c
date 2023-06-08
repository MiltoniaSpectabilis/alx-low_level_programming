#include "main.h"

int _is_prime_helper(int n, int i);

/**
 * is_prime_number - checks if a given number is prime
 * @n: the input number
 *
 * Return: int - 1 if the number is prime, or
 *               0 if the number is not prime
 *
 */

int is_prime_number(int n)
{
	return (_is_prime_helper(n, 2));
}

/**
 * _is_prime_helper - Checks if a number is prime
 *
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
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
