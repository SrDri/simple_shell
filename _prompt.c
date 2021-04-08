#include "shell.h"

/**
 * write_prompt - writes the shell prompt
 * @ac: arguments count from the main()
*/

void _prompt(int ac)
{
	if (ac == 1)
		write(STDOUT_FILENO, "$ ", 2);
}
