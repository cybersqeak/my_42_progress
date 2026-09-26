#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

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

char *get_next_line(int fd);
//void go_next_line_utils(int some);
ssize_t read_one_chunk(t_sys *sys);
void	update_buffer(t_sys *sys);
void	check_buffer(t_sys *sys);
ssize_t ft_strlen(char *str);
char *ft_strjoin(char *s1, char *s2);
char *ft_strchr(char *s1, char c);
char *cut(char *src, ssize_t len);
char *cut_remain(char *src, ssize_t index, ssize_t start);
char *ft_dup(char *src, ssize_t size);

#endif
