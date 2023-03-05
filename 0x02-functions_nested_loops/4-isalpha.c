#include "main.h"
/**
 * _isalpha - prints all alphabets
 * Return: 1 if alphabet, otherwise 0
 * @c: to check if it alaphabet
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
