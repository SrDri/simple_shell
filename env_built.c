#include "shell.h"

/**
 * env_built - handles the env built-in command
 * @s: string
 * @env: the env from the main()
 * Return: true if this is the env built-in command
*/

bool env_built(char *s, char *env[])
{
	if (_strcmp(s, "env", 0, 2))
	{
		print_env(env);
		return (true);
	}

	return (false);
}