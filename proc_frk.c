#include "shell.h"

/**
 * proce_frk - description
 * @tok: tokenize
 * @env: environment
 * @cmd: command
 * @st: struct
 * @err: message error
 * Return: ni puta idea
*/
void proce_frk(char **tok, char **env, char *cmd, struct stat *st, char *err)
{
	if (stat(tok[0], st) == 0)
	{
		execve(tok[0], tok, env);
	}
	else
	{
		free(tok);
		free(cmd);
		write(STDOUT_FILENO, err, 26);
		exit(127);
	}
}
