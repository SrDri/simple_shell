#include "shell.h"

int main(int ac, char *av[], char *env[])
{
	extern char **environ;
	size_t buf = 0;
	char *line = NULL;
	ssize_t controller = 0;
	char *err_msg = "not found\n";
	pid_t frk = fork();
	char **tok_s = NULL;

	if (ac == 1)
	{
		while (controller != EOF)
		{
			if (isatty(STDIN_FILENO))
				_prompt(ac);

			controller = getline(&line, &buf, stdin);

			exit_control(line, controller);

			tok_s = _strtok(line);

			if (frk < 0)
				return (-1);

			if (!env_built(tok_s[0], env))
			{
				if (frk == 0)
				{
					if (execve(findpath(environ, tok_s[0]), tok_s, NULL) == -1)
					{
						printf("%s\n", err_msg);
						return (-1);
					}
				}
				else
					wait(NULL);
			}
		}
		/* void av y void env */
		(void)av;
		(void)env;
		free(line);
	}

	return (0);
}
