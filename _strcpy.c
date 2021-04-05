#include "shell.h"
#include <stdio.h>

/**
 * _strcpy - copia string
 * @dest: buffer pointer to a destination string
 * @src: string constant to be copied
 * Return: void
*/

void _strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];

	dest[i] = src[i];
}
