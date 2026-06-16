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
    size_t elements = ft_strlen(&src[start]);
    const char  *starting_ptr = &src[start];
    size_t index = 0;
    char *substring = malloc((elements + 1) * sizeof(char const));
   if (!(substring))
      return (NULL);
  while (starting_ptr[index] != '\0' && index < len )
  {
      substring[index] = starting_ptr[index];
      index++;
  }
  return (substring);
}

int main(void)
{   
    const char src[11] = "helloworld";
    printf("%s\n",ft_substr(src,10,5));
    
    return (0);
}

    

