#include <stddef.h>
#include "libft.h"
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char       *d;
    const unsigned char *s;
    size_t              i;

    if (!dst && !src)
        return NULL;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;

    if (d < s)
    {
        i = 0;
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else if (d > s)
    {
        i = len;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }

    return dst;
}
int main(void)
{
    char dst[5];
    const char src[] = "testmode";
    printf("the address of dst is %p\n", dst);
    printf("the address of src is %p\n", src);
    printf("the differ is %i\n", (int)(dst - src) );
    printf("the return char * is : %s\n",(char *)ft_memmove(dst, src,5));
    printf("the real return char * is : %s\n",(char *)memmove(dst, src,5));
    return (0);

}