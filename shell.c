#include "shell.h"

int main(int ac, char *av[], char *env[])
{
	ssize_t controller = 0;
	size_t buf;
	char *line = NULL, *err_msg = "No such file or directory\n";
	char **tok_s = NULL;
	pid_t frk;

	if (ac == 1)
	{
		while (controller != EOF)
		{
			if (isatty(STDIN_FILENO))
				_prompt(ac);

			controller = getline(&line, &buf, stdin);
			exit_control(line, controller);

			if (controller == -1)
			{
				if (feof(stdin))
				{
					exit(EXIT_SUCCESS); // We recieved an EOF
				}
				else
				{
					perror("Error: ");
					exit(EXIT_FAILURE);
				}
			}

			tok_s = _strtok(line);

			frk = fork();

			if (frk < 0)
				return (-1);

			if (!env_built(tok_s[0], env))
			{
				if (frk == 0)
				{
					if (execve(find_path(env, tok_s[0]), tok_s, NULL) == EOF)
					{
						write(STDOUT_FILENO, err_msg, 26);
						return (-1);
					}
					exit(EXIT_FAILURE);
				}
				else
				{
					wait(NULL);
				}
			}
		}
	}
	else
	{
		(void)av;
		(void)env;
	}
	exit(EXIT_SUCCESS);
	free(line);
	return (0);
}