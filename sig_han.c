#include "shell.h"

/**
 * sig_han - takes care of signals
 * @sig_num: a signal
 */
void sig_han(int sig_num)
{
	if (sig_num == SIGINT)
		write(STDOUT_FILENO, "\n$ ", 3);
}
