#include <stdio.h>
#include "libft.h"
//#include <bsd/string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t B_index;
    size_t L_index;
    char *set_ptr;
    size_t set_index; //char set_index also works somehow...j

    set_ptr = NULL;    
    if (!big || !little)
        return NULL;

    if (little[0] == '\0')
        return (char *)big;

        B_index = 0;
    while ((B_index < len) && big[B_index])
    {
        
        L_index = 0;
        set_index = B_index;
        while (set_index < len && big [set_index] && 
            big[set_index] == little[L_index])
        {
            printf("second while statement\n");
            if (L_index == 0)
            {
                printf(" hello\n ");
                set_ptr = (char*)&big[set_index];
            }
           /*  if (little[L_index]=='\0')
            {
                printf("return! \n");
                return (set_ptr);
            }
                */

            set_index++,L_index++;
        }

        if (little[L_index]=='\0')
        {
            printf("return!2 \n");
            return (set_ptr);
        }
        printf(" reseting\n");
        set_ptr = NULL;
       B_index++; 
    }
    return (set_ptr);
}




int main(void)
{
    const char big[] = "gggoogookdd";
    const char little[] = "good";
    printf("big[0] is : %c\n", big[0]);
    for (size_t i = 0; i < sizeof(big); i++)
    {
        printf("%p,%c \n",&big[i], (char )big[i]);
    }
    printf("\n\nthe pointer of my strnstr returned :%p\n",ft_strnstr(big,little,15));
//    printf("the pointer of my strnstr returned :%p\n",strnstr(big,little,15));
    return (0);
}