#include "shell.h"

/**
 * _strtok - finds and returns
 * @s: string
 * Return: tokenize
*/

char **_strtok(char *s)
{
	unsigned int i;
	char *token = NULL;
	char **tokens = NULL;
	/*const unsigned int len = _strlen(s);*/

	tokens = malloc((num_words(s) + 1) * sizeof(char *));
	if (tokens == NULL)
		return (NULL);

	token = strtok(s, " \t\r\n");

	i = 0;
	while (token)
	{
		tokens[i] = token;
		token = strtok(NULL, " \t\r\n");
		i++;
	}

	tokens[i] = NULL;

	return (tokens);
}
