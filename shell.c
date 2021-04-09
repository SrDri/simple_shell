#include "shell.h"

int main(void)
{
	size_t buf = 0;
	char *line = NULL;
	ssize_t controller = 0;
	/*char *err_msg = "not found\n";*/

	while (controller != EOF)
	{
		if (isatty(STDIN_FILENO))
			_prompt(1);

		controller = getline(&line, &buf, stdin);

		if (!env_built(line, env))
		{
			exit_control(line, controller);
		}
	}

	free(line);
	return (0);
}
