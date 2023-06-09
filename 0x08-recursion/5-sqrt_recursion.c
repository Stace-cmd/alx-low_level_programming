#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to calculate the square root of
 *
 * Return: integer square root of n or -1 if there is no natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    if (n == 0 || n == 1)
        return (n);

    return (_sqrt_helper(n, 1));
}
# include “main.h”
/**
* _sqrt_helper - recursive helper function to find square root
* @n: integer to calculate the square root of
* @i: integer to check as a possible square root
*
* Return: integer square root of n or -1 if there is no natural square root
*/
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}

