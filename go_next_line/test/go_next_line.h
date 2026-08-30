#ifndef GO_NEXT_LINE_H
#define GO_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 42

typedef struct s_sys
{
	int count;
	char *buff;
	int fd;

}t_sys;

char *go_next_line(int fd);
//void go_next_line_utils(int some);
ssize_t read_one_chunk(t_sys *sys);
void	update_buffer(t_sys *sys);
void	check_buffer(t_sys *sys);

#endif
