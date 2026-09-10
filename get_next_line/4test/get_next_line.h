#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 42
#define ERROR -1
#define READ 0
#define SUCCESS 1
#define END 2

typedef struct s_sys
{
	ssize_t count;
    int fd;
	char buff[BUFFER_SIZE];
    char *current_buff;
	int flags[3]; // flags 
	size_t index;

}t_sys;

char *get_next_line(int fd);
void copy(t_sys *sys, size_t size);
int find_newline(t_sys *sys);
int read_new(t_sys *sys);
char *check_return(t_sys *sys);
int loop(t_sys *sys);
int read_buff(t_sys *sys);

#endif
