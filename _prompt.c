#include "shell.h"

/**
 * _prompt - shell prompt
 * @ac: arguments count
*/

void _prompt(int ac)
{
	if (ac == 1)
		write(STDOUT_FILENO, "$ ", 2);
}
