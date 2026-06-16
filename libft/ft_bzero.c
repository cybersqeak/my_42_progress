#include <stdio.h>
#include <stdint.h>

void    ft_bzero(void *s, size_t size)
{
    unsigned char *converted_s = (unsigned char*)s;
    size_t index = 0;
    while (index < size)
    {
        printf("here\n");
        converted_s[index] = 0;
        index++;
    }
}

int main(void)
{
    char str[6];
    ft_bzero(str,6);
    for (int i = 0; i < 6; i++)
    {
        printf("%c\n",str[i]);
    }
    return (0);
}
