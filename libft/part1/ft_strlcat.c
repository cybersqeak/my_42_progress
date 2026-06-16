#include<unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <bsd/string.h>

size_t checklen(const char *s, size_t sz)
{
    size_t i = 0;
    while (s[i] && i < sz )
        i++;
    return (i);
}
size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i] )
        i++;
    return (i);
}

size_t ft_strlcat(char *dst, const char *restrict src, size_t sz)
{
    size_t dstlength ;
    size_t srclength ;
    size_t i;
    dstlength = checklen(dst,sz); 
    srclength = ft_strlen(src);
    /*if (dstlength < strlen(dst) || sz == 0)
        return (srclength + sz);*/
    if (sz == dstlength || sz == 0)
    {
        printf("i am here stuck in if (sz == 0)\n");
        return (srclength + sz);
    }
    //if (dstlength >= sz)
    //    return (srclength + sz);
    i = 0;
    while (src[i] != '\0' && i < sz - dstlength - 1)
    {
        printf("i am here at while statement\n"); 
        dst[dstlength + i] = src[i];
        i++;
    }
    dst[dstlength + i] = '\0';
    printf("i am here at return  statement\n"); 
    return (dstlength + srclength);
}

int main(void)
{
    const char src[6] = "hello";
    char dest[50] = "deaadedeenkee";
    char dest1[50] = "deaadedeenkee";
    size_t    size = 0;

    printf("my strlcat return value %zu\n",ft_strlcat(dest,src,size));
    printf("my strlcat return string %s\n\n\n\n\n\n\n",dest);
    printf("\nthe src is now : %s\n",src);
    printf("real strlcat return value %zu\n",strlcat(dest1,src,size));
    printf("real strlcat return string %s\n",dest1);
    return (0);
}

