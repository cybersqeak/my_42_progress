#include <stdio.h>
#include <bsd/string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t B_index = 0;
    size_t L_index = 0;
    char *set_ptr = NULL;
    size_t set_index; //char set_index also works somehow...j
    if (little[0] == '\0')
        return ((char *)big);
    while (big[B_index] && B_index < len) 
    {
        L_index = 0;
        set_index = B_index;
        while (big[set_index] == little[L_index] && set_index < len)
        {
            if (big[set_index]== little[0])
                set_ptr = (char*)&big[set_index];
            set_index++,L_index++;
        }
        if (little[L_index]=='\0')
            return (set_ptr);
       B_index++; 
    }
    return (set_ptr);
}



int main(void)
{
    const char big[] = "ggjjl;gojgoodkk:ood";
    const char little[] = "good";
    for (size_t i = 0; i < sizeof(big); i++)
    {
        printf("%p, \n",&big[i]);
    }
    printf("\n\nthe pointer of my strnstr returned :%p\n",ft_strnstr(big,little,15));
    printf("the pointer of my strnstr returned :%p\n",strnstr(big,little,15));
    return (0);
}





