#include "main.h"

/**
 * *_strcat -  a function that concat two strings
 * @dest: pointer string one variable
 * @src: pointer string 2nd variable
 * Return: always *dest when is Success
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i, slen = 0;

	while (dest[dlen])
		dlen++;

	while (src[slen])
		slen++;

<<<<<<< HEAD
	for (i = 0; i < slen && src[i] != '0'; i++)
=======

	for (i = 0; i < slen; i++)
>>>>>>> 6469b012dafe92bf19b64bdf6e245887949752ea
		dest[dlen + i] = src[i];

	dest[dlen + i] = '\0';

	return (dest);
}
