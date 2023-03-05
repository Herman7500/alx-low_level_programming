#include "main.h"

/**
 * _abs - checks for absolute value
 * Return: 'a' since its positive
 * @a: parameter to be checked
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

