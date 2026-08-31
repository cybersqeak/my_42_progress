#ifndef GO_NEXT_LINE_H
#define GO_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 42

typedef struct s_sys
{
	ssize_t count;
	char *buff;
	char *current_buff;
	int fd;
	int flag;
	size_t index;

}t_sys;

char *go_next_line(int fd);
ssize_t read_one_chunk(t_sys *sys);
int	update_buffer(t_sys *sys);
int	check_buffer(t_sys *sys);
void	truncate_tail(t_sys *sys, size_t pos);
int check_newline(t_sys *sys,size_t *index);
int init(t_sys *sys, int fd);

#endif
