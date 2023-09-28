#include "main.h"
/**
 * _sqrt_helper - Recursive helper function to find the square root.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
        return guess; /* Found the square root */

    if (guess * guess > n)
        return -1; /* n does not have a natural square root */

    return _sqrt_helper(n, guess + 1); /* Try the next guess */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1; /* Error: Square root of negative numbers is not supported */

    return _sqrt_helper(n, 0); /* Start the search for the square root with a guess of 0 */
}

