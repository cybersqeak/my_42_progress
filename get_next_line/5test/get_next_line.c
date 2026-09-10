#include "get_next_line.h"

char *read_buff(int fd, t_sys *sys)
{
    char *tmp;
    char *buffer = malloc(BUFFER_SIZE + 1);
    ssize_t bytes_read = 0;
    if (!buffer)
        return NULL;

    while(1)
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read <= 0)
            break;
        buffer[bytes_read] = '\0';
        tmp = sys->stash;
        sys->stash = ft_strjoin(tmp, buffer);
        free(tmp);
        if (sys->stash && ft_strchr(sys->stash, '\n'))
        {
            free(buffer);
            printf("hello i am here\n");
            return (sys->stash);
        }
    }
    free(buffer);
    if (bytes_read < 0)
        return NULL;
    return sys->stash;
}





char *get_next_line(int fd)
{
    char *for_return;
    char *haha;
    static t_sys sys;
    //sys = (t_sys){0};

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;
    haha= read_buff(fd, &sys);
    sys.stash = haha;
    for_return = save_line_remain(&sys);
    return for_return;
}


