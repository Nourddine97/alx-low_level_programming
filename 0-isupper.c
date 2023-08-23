<<<<<<< HEAD
#include "main.h"

/**
 * _isupper - a function that print is the char upper or not
 * @c: variable input
 * Return: 1 if char upper and 0 if is not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======
nclude "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
>>>>>>> 6469b012dafe92bf19b64bdf6e245887949752ea
}
