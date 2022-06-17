#include "palindrome.h"
/**
 * is_palindrome - checks whether or not a given unsigned integer is palindrome
 * @n: is the number to be checked
 * Return: int 
 */
int is_palindrome(unsigned long n)
{
	int r, num, sum = 0;

	for (num = n; n != 0; n = n / 10)
	{
		r = n % 10;
		sum = sum * 10 + r;
	}
	if (num == sum)
		return (1);
	else
		return (0);
}