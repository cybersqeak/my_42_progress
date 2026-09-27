#include "get_next_line.h"

char *ft_dup(char *src,ssize_t size)
{
    char *dup;
    ssize_t index;
    if (!src)
        return NULL;
    
    dup = NULL; 
    dup = malloc(size + 1);
    if (!dup)
        return NULL;
    index = 0;
    while(src[index])
    {
        dup[index] = src[index];
        index++;
    }
    dup[index] = '\0';
    free(src);
    return dup;
}
    
char *cut_remain(char *src, ssize_t index,  ssize_t start)
{
    char *tmp = malloc(index - start + 1);
    ssize_t j = 0;
    if (!tmp)
        return NULL;
    index = start ;

    while(src[index])
    {
        tmp[j] = src[index];
        j++;
        index++;
    }
    tmp[j] = '\0';
    return tmp;
}
    

char *cut(char *src, ssize_t len)
{
    char *tmp;
    ssize_t i;

    tmp = malloc(sizeof(char) * (len + 1 + 1));
    if (!tmp)
        return NULL;
    
    i = 0;
    while (i <= len)
    {
        tmp[i] = src[i];
        i++;
    }
    tmp[i] = '\0';
    return tmp;
}

   
char *ft_strchr(char *str, char c)
{
    ssize_t index;
    if (!str)
        return NULL;

    index = 0;
    while(str[index])
    {
       if (str[index] == c)
           return &str[index];
       index++;
    }
    if (c == '\0')
        return &str[index];
    return NULL;
}
          

ssize_t ft_strlen(char *str)
{

    ssize_t count = 0;
    if (!str)
       return 0;
    while (str[count])
        count++;
    return count;
}

char *ft_strjoin(char *s1, char *s2)
{
    char *tmp;
    ssize_t i = 0;
    ssize_t j = 0;

    if (!s1 && !s2)
        return NULL;
    tmp = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!tmp)
        return NULL;

    while (s1 && s1[i])
    {
        tmp[i] = s1[i];
        i++;
    }
    while(s2 && s2[j])
    {
        tmp[i + j] = s2[j];
        j++;
    }
    tmp[i + j] = '\0';
    return tmp;
}
