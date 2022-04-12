#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: c is an ascii character
 *
 * Return: 1 (if letter)
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122 || (c >= 65 && c <= 90 ));
}
