#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

size_t  ft_strlen(const char *str)
{
    size_t    index = 0;
    while (str[index])
        index++;
    return (index);
}

void ft_putstr_fd(char *s, int fd)
{
    size_t bytes_length = ft_strlen(s) + 1;
    write(fd,s,bytes_length);
}

int main(void)
{
    char str[] = "helloworld";

    ft_putstr_fd(str,1);
    return (0);
}

