#include "main.h"
<<<<<<< HEAD

/**
 * *_strncat - a function that conctac the 1st string
 * with number of n char of 2nd string
 * @dest: pointer one variable
 * @src: pointer 2nd variable
 * @n: variable n character
 * Return: Always dest when is Success
 */

char *_strncat(char *dest, char *src, int n)
{
	int  i, j;

	i = 0;
	j = 0;

	while (dest[i])
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

=======
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
>>>>>>> e
	return (dest);
}
