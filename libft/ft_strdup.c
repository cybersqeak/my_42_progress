#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
size_t  ft_strlen(const char *str)
{
    size_t len = 0;
    while (str[len] != '\0')
            len++;
    return (len);
}

char    *ft_strdup(const char *src)
{
    char *duplicated_string;
    size_t src_length; 
    size_t index;

    if (!src)
        return NULL;

    src_length = ft_strlen(src);

    if (src_length == SIZE_MAX)
        return NULL;

    duplicated_string = malloc((src_length + 1) * sizeof(const char));

    if (!(duplicated_string))
        return (NULL);

    index = 0;
    while (src[index])
    {
        duplicated_string[index] = src[index];
        index++;
    }
    duplicated_string[index] = '\0';

    return (duplicated_string);
}



int main(void)
{

    const char src[6] = "hello";
    char *addr = ft_strdup(src);
    printf("the duplicated_string is : %s\n",addr);
    free(addr);
    return (0);
}

    
