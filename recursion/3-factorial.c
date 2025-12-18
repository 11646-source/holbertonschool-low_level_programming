/**
 * factorial - calculates the factorial of a given number
 *
 * @n: The number for which the factorial is to be calculated.
 *
 * Return: If n is lower than 0, returns -1 to indicate an error.
 *         Otherwise, returns the factorial of n.
 *
 * Factorial is defined as:
 * - factorial(0) = 1
 * - factorial(n) = n * factorial(n - 1) for n > 0
 */
int factorial(int n)
{
	if (n > 0 )
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n -1));
}
