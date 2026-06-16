#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
    const char src[10] = "hello";
    char       dest[11] = "jellowo";
    size_t size = 9;
    printf("before : %s\n",dest);
    printf("%zu\n",strlcat(dest,src,size));
    printf("after : %s\n",dest);
    




    return (0);
}
