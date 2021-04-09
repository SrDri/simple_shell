#include "shell.h"

/**
 * _strseq - takes a sequence from the interval of s[beg:end],
 * then copies it into the string passed by the poiner.
 * @s: string constant from where the token would be taken
 * @beg: the beginning of the interval of s[beg:end]
 * @end: the end of the interval of s[beg:end]
 * @res: the result
 * Return: void
*/

void _strseq(const char *s, int beg, int end, char **res)
{
	int i = 0;

	/* printf("beg: %d, end: %d\n", beg, end); */

	while (beg != end)
		(*res)[i++] = s[beg++];

	(*res)[i] = '\0';
}