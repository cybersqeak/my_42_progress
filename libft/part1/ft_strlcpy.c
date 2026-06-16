#include <stdio.h>
#include <stdint.h>
#include <bsd/string.h>
/*
size_t checklen(const char *s , size_t sz)
{   
    size_t length = 0;
    while (s[length] && length < sz)
        length++;
    return (length);
}
*/


size_t ft_strlen(const char *s)
{
    size_t length = 0;
    while (s[length])
        length++;
    return (length);
}


size_t ft_strlcpy(char *dst, const char *restrict src, size_t sz)
{
 //   size_t dstlength;
    size_t srclength;
    size_t i = 0;
 //   dstlength = checklen(dst,sz);
    srclength = ft_strlen(src);
  //  printf("the length of dst :%zu\n",dstlength);
    printf("the length of src :%zu\n\n\n\n\n\n",srclength);
    //printf("%zu\n",sz);    
   // printf("%zu\n",sz -1 );    
    if (sz == 0) 
    {
        return (srclength); // it was dstlength + srclength at first.
    }
    while (src[i] != '\0' && i < sz - 1) // since sz is size_t (same as unsigned long) if you do sz = 0 and sz - 1 this means (unsigned long)(-1) which will be the maximum value of unsigned long... 
                                         //

    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (srclength); 
}

int main(void)
{
    const char src[15] = "goodsomething";
    char   dst[10] = "abc";  
    char       dst1[10] = "abc";
    
printf("my strlcpy return value : %zu\n",ft_strlcpy(dst, src, 0));
    printf("the dst is now : %s\n\n\n\n\n\n",dst);
    printf("real strlcpy return value : %zu\n",strlcpy(dst1, src, 0));
    printf("the dst1 is now : %s\n",dst1);
    return (0);
}

       


    


        


