#include <stdio.h>
#include <bsd/string.h>

// size_t  strlcat(char *dst, const char *src, size_t size)
// {
//     size_t srclength;
//     size_t destlength;
//     size_t index;

//     srclength = ft_strlen(src);
    
    
    
//     index = 0;
//     while (src[index] && index < size - destlength - 1)
//     {
//         dest[destlength + index] = src[index];
//         index++;
//     }
//     dest[destlength + index] = '\0';
//     return (destlength + srclength)
// }

int main(void)
{
    const char src[10] = "hello";
    char       dest[11] = "cesare";
    size_t size = 21;
    printf("before : %s\n",dest);
    printf("%zu\n",strlcat(dest,src,size));
    printf("after : %s\n",dest);
    




    return (0);
}
