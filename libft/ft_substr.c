#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

size_t  ft_strlen(const char *src)
{
    size_t index = 0;
    while (src[index])
        index++;
    return (index);
}


char *ft_substr(char const *src, unsigned int start, size_t len)
{
    size_t elements; 
    const char  *starting_ptr; 
    size_t index;
    size_t max_index;
    char *substring;
    
    if(!src)
        return NULL;
    max_index = ft_strlen(src);
    if (max_index < start)
        return NULL;
    starting_ptr = &src[start];
    substring = malloc(len + 1);
    if (!(substring))
        return (NULL);
    index = 0;
    while (index < len && starting_ptr[index] != '\0')
    {
        substring[index] = starting_ptr[index];
        index++;
    }
    substring[index] = '\0';
  return (substring);
}

int main(void)
{   
    const char src[11] = "helloworld";
    printf("%s\n",ft_substr(src,9,5));
    
    return (0);
}

    

