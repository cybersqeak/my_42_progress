#include <stdio.h>
#include <stdint.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
     unsigned char *converted_s1 = (unsigned char*)s1;
     unsigned char *converted_s2= (unsigned char*)s2;
     size_t index = 0;
     if (n <= 0)
         return (0);
     while (index < n)
     {
         if (converted_s1[index] != converted_s2[index] || index == n - 1)
             return (converted_s1[index] - converted_s2[index]);
         index++;
     }
     return (converted_s1[index] - converted_s2[index]);
}

int main(void)
{
    const char *str1= "ie3loworld";
    const char *str2 ="helloworld";

    printf("the return value of my strncmp :%d\n",ft_memcmp(str1,str2,6));
   printf("the return value of real strncmp :%d\n",memcmp(str1,str2,6));// if i put n value minus. the complier detect it, but not on mine...
                                                                           
    return (0);
}



           
