#include "go_next_line.h"
char *go_next_line(int fd)
{

	static t_sys sys;
	if (sys->flag == 0)
		if (init(&sys, fd) == -1)
			return NULL; //error
	check_newline(&sys, sys->index);

	return sys.buff;
}
