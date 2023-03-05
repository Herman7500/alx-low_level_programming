#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @i: checks for values of 'i'
 * Return: always return 'k'
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
	{
		k = k * -1;
	}
	_putchar(k + '0');
	return (k);
}
