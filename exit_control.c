#include "shell.h"

/**
 * exit_control - ctrl -D
 * @line: command line
 * @controller: size of the line
*/

void exit_control(char *line, ssize_t controller)
{
	if (controller == EOF)
	{
		free(line);
		line = NULL;
		/*write(STDOUT_FILENO, "\n", 1);*/
		exit(0);
	}

	if (_strcmp(line, "exit", 0, 3))
	{
		free(line);
		line = NULL;
		exit(0);
	}
}
