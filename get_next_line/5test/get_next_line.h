#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 42
typedef struct s_sys
{
    char *stash;
}t_sys;

size_t ft_strlen(char *str);
char *ft_strjoin(char *s1, char *s2);
char *ft_strchr(char *str, int c);
char *save_remain(t_sys *sys);
char *get_next_line(int fd);
//char *copy(char *src);
char *save_line_remain(t_sys *sys);

#endif
