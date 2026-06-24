#include "../libft.h"
#include <string.h>
char *ft_strchr(const char *string, int chr)
{
    size_t index;

    
    index = 0;

    while (string[index])
    {
        if (string[index] == (char)chr)
            return (char *)&string[index]; 
        index ++;
    }
    if (string[index] == (char)chr)
            return (char *)&string[index];
    return NULL;
}


int main(void)
{
    const char string[10]="hello";
    int c = 0; // char ;
    printf("addresss of %s:\n ",string);
    for (size_t i = 0; i < sizeof(string); i++)
    {
        printf("%p, ",&string[i]);
    }
    printf("\n\n\nthe return pointer from my strchr : %p\n",ft_strchr(string,c));
    printf("the return pointer from real strchr : %p\n\n\n\n\n\n\n",strchr(string,c));
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
    
    
    

