#include "shell.h"

/**
 * num_words - sentences num
 * @sentence: sentences
 * Return: num sentences
*/

int num_words(char *sentence)
{
	int i = 0, words = 0;

	while (sentence[i])
	{
		if (sentence[i] == 32 && sentence[i + 1] != 32 && sentence[i + 1] != 0)
			words++;
		i++;
	}

	if (sentence[0] != 32)
		words++;
	return (words);
}
