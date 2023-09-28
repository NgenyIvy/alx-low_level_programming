#include "main.h"
/**
 * is_prime_helper - Recursive helper function to check if n is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
    if (n <= 1)
        return 0; /* Numbers less than or equal to 1 are not prime */

    if (divisor == 1)
        return 1; /* If we reach divisor 1, n is prime */

    if (n % divisor == 0)
        return 0; /* If n is divisible by divisor, it's not prime */

    return is_prime_helper(n, divisor - 1); /* Check the next divisor */
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    return is_prime_helper(n, n / 2); /* Start checking divisors from n/2 */
}

