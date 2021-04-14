#include "shell.h"

/**
 * main - root hsh
 * @ac: arguments count
 * @av: arg
 * @env: environment
 * Return: shell
*/

int main(int ac, char *av[], char *env[])
{
	ssize_t controller = 0;
	size_t buf;
	char *line = NULL, *err_msg = "No such file or directory\n";
	char **tok_s = NULL;
	pid_t frk;

	while (controller != EOF)
	{
		signal(SIGINT, sig_hand);
		if (isatty(STDIN_FILENO))
			_prompt(ac);
		controller = getline(&line, &buf, stdin);
		tok_s = _strtok(line);

		if (!env_built(tok_s[0], env))
		{
            exit_control(line, controller);
			frk = fork();
			if (frk < 0)
				return (-1);
			if (frk == 0)
			{
				if (execve(find_path(env, tok_s[0]), tok_s, NULL) == EOF)
				{
					write(STDOUT_FILENO, err_msg, 26);
					return (-1);
				}
			}
			else
				wait(NULL);
		}
	}
	(void)av;
	free(line);
	return (0);
}
