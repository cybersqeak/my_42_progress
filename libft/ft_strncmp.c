#include <stdio.h>
#include <stdint.h>
#include <string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t index = 0;

    if (n == 0)
        return (0);

    while (str1[index] && str2[index] && index < n)
    {
        if (str1[index] != str2[index])
            return ((unsigned char)str1[index] - (unsigned char)str2[index]);
        index++;
    }
     return ((unsigned char)str1[index] - (unsigned char)str2[index]);

     if (index < n)
        return ((unsigned char)str1[index] - (unsigned char)str2[index]);

    return (0);
}

int main(void)
{
    const char *str1= "hellow3rld";
    const char *str2 ="helloworld";

    printf("the return value of my strncmp :%d\n",ft_strncmp(str1,str2,6));
   printf("the return value of real strncmp :%d\n",strncmp(str1,str2,6));// if i put n value minus. the complier detect it, but not on mine...
                                                                           
    return (0);
}

