#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
       size_t index = 0;
       while (str[index])
           index++;
       return (index);
}
char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_string;
    size_t new_elements;
    size_t index = 0;
    size_t index_for_newstr = 0;
    if (!s1 || !s2)
        return NULL;
    new_elements =  ft_strlen(s1) + ft_strlen(s2) + 1;
    new_string = malloc(new_elements);
    if (!new_string)
        return NULL;
    while (s1[index] != '\0')
    {
        printf("imhere\n");
        new_string[index_for_newstr] = s1[index];
        index++;
        index_for_newstr++;
    }
    index = 0;
    while (s2[index] != '\0')
    {
        new_string[index_for_newstr] = s2[index];
        index++;
        index_for_newstr++;
    }
    new_string[index_for_newstr] = '\0';

    return (new_string);
}
/*
int main(void)
{
    const char s1[6] = " ";
    const char s2[6] = "hello";
    char *newstr = ft_strjoin(s1,s2);
    printf("the new string is : %s\n",newstr);
    printf("the sizeof s1 is : %zu\n", sizeof(s1));
    printf("the sizeof s2 is : %zu\n", sizeof(s2));
    free(newstr);
    return (0);
}


*/
