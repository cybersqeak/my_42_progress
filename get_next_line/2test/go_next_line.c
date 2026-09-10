#include "go_next_line.h"
char *go_next_line(int fd)
{

	t_sys sys;
	sys =(t_sys){0};
	sys.fd = fd;
	sys.buff = malloc(BUFFER_SIZE + 1);
	if (!sys.buff)
		return NULL; //error
	if (read_one_chunk(&sys) == -1)
		return NULL; // error
	sys.buff[sys.count]='\0';// need a terminator!!!!!!!!!
	return sys.buff;
}
