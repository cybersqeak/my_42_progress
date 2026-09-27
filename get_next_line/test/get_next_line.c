#include "get_next_line.h"

char *get_tail(char *stash)
{
    char *tail;
    char *old_stash;
    ssize_t index;
    ssize_t start;
    index = 0;
    while(stash[index])
    {
        if (stash[index] == '\n')
        {
            start = index + 1;
            index++;
            break;
        }
        index++;
    }
    if (stash[index] == '\0')
        start = index;
    while (stash[index])
        index++;
    tail = cut_remain(stash, index, start);
    old_stash = stash;
    stash = ft_dup(tail,ft_strlen(tail));
    free(old_stash);
    return stash;
}
     
char *get_line(char *stash)
{
    char *line;
    char *L;
    ssize_t len ;
    len = 0;
    while (stash[len] && stash[len] != '\n')
        len++;

    L = cut(stash, len);
    line = ft_dup(L, ft_strlen(L));
    return line;
}
    


    
char *read_buffer(int fd, char*stash)
{
    char *buff;
    char *tmp;
    ssize_t bytes;
    ssize_t index;

    buff = malloc(BUFFER_SIZE + 1);
    if (!buff)
    {
        free(stash);
        return NULL;
    }
    while(1)
    { 
        bytes = read(fd, buff, BUFFER_SIZE);
        if (bytes <= 0)
            break;
        buff[bytes] = '\0';
        tmp = stash;
        stash = ft_strjoin(tmp,buff);
        free(tmp);
        if (stash && ft_strchr(stash, '\n'))
        {
            stash = ft_dup(stash,ft_strlen(stash));
            free(buff);
            return stash;
        }
        stash = ft_dup(stash,ft_strlen(stash));
    }
    free(buff);
    if (bytes < 0) 
    {
        free(stash);
        return NULL;
    }
    return stash;
}

char *get_next_line(int fd)
{
    static char *stash;
    char *line = NULL;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;
    stash = read_buffer(fd,stash);
    if (!stash || stash[0] == '\0')
        return NULL;
    line = get_line(stash);
    stash = get_tail(stash);
    return line;    

}
