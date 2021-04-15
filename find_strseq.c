#include "shell.h"

/**
 * find_strseq - finds the index of the separator `sep`
 * inside the string `s`, starting from the index `idx`
 * @s: string constant where to search
 * @sep: the separator(s) to search for
 * @idx: the position of the string from where to start
 * Return: the index of the `sep` inside the string `s`
 */
int find_strseq(const char *s, const char *sep, int idx)
{
	int i = 0;

	while (sep[i])
	{
		while (s[idx])
		{
			if (s[idx] == sep[i])
				return (idx);

			idx++;
		}
		i++;
	}

	return (idx);
}
