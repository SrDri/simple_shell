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
	struct stat st;

	while (controller != EOF)
	{
		signal(SIGINT, sig_hand);
		if (isatty(STDIN_FILENO))
			_prompt(ac);
		controller = getline(&line, &buf, stdin);
		exit_control(line, controller);
		tok_s = _strtok(line);

		if (!env_built(tok_s[0], env))
		{
			frk = fork();
			if (frk < 0)
				return (-1);
			if (frk == 0)
			{
				proce_frk(tok_s, env, line, &st, err_msg);
			}
			else
				wait(NULL);
			free(tok_s);
		}
	}
	(void)av;
	free(line);
	free(tok_s);
	return (0);
}
