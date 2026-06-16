#include <stdio.h>
#include <stdlib.h>

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
    size_t src_length = ft_strlen(src);
    size_t index = 0;
   // printf("%ld\n",src_length);
    //printf("sizeof(src) = %ld ", sizeof(const char));
    duplicated_string = malloc((src_length + 1) * sizeof(const char));
    if (!(duplicated_string))
        return (NULL);
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
    printf("the duplicated_string is : %s\n",ft_strdup(src));
    return (0);
}

    
