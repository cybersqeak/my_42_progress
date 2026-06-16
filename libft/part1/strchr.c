#include <string.h>
#include<stdio.h>
#include <stdint.h>

char *ft_strchr(const char *string, int chr)
{
    size_t i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == chr)
               return ((char *)&string[i]);
       i++; 
    }
    if (string[i] == chr)
        return ((char *)&string[i]);

   return (NULL);
}

int main(void)
{
    const char string[6]="hebBlo";
    int c = 66 ; // char ;
    printf("addresss:\n ");
    for (size_t i = 0; i < sizeof(string); i++)
    {
        printf("%p, ",&string[i]);
    }
    printf("\n\n\nthe return pointer from my strchr : %p\n",ft_strchr(string,c));
    printf("the return pointer from real strchr : %p\n",strchr(string,c));
    return (0);
   
}
    
    
