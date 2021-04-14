#include "shell.h"

/**
 * sig_hand - takes care of signals
 * @sig_num: a signal
*/

void sig_hand(int sig_num)
{
	if (sig_num == SIGINT)
		write(STDOUT_FILENO, "\n$ ", 3);
}
