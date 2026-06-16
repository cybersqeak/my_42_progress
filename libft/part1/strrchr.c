#include <string.h>
#include<stdio.h>
#include <stdint.h>

char    *ft_strrchr(const char *string, int chr)
{
    size_t i = 0;
    char *set_pointer = NULL;
    while(string[i] != '\0')
    {
       if (string[i] == chr)
           set_pointer = (char *)&string[i];
       i++;
    }
    if (string[i] == chr)
        set_pointer = (char *)&string[i];
    return (set_pointer);
}


int main(void)
{
    const char string[10]="aBaaBa";
    int c = 66 ; // char ;
    printf("addresss of %s:\n ",string);
    for (size_t i = 0; i < sizeof(string); i++)
    {
        printf("%p, ",&string[i]);
    }
    printf("\n\n\nthe return pointer from my strchr : %p\n",ft_strrchr(string,c));
    printf("the return pointer from real strchr : %p\n\n\n\n\n\n\n",strrchr(string,c));
     for (size_t i = 0; i < sizeof(string); i++)
    {
        printf("%zu, ",sizeof(string[i]));
    }
     printf("\n\n\n\n");
      for (size_t i = 0; i < sizeof(string); i++)
    {
        printf("%c:",string[i]);
    }
 
    
    return (0);
   
}
    
    
    

