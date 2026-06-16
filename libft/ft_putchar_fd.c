#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}


int main(void)
{
    char letter = 'h';
    int fd = 1;
    ft_putchar_fd(letter,fd);
    write(1,"\n",2);//\n is two bytes, but this also works why?
    //printf("sizeof () : %ld,",sizeof("\n"));
    return (0);
}

