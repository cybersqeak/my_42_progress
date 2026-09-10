#include "get_next_line.h"



char *copy(char *src)
{
    size_t index = 0;
    char *dst = malloc(ft_strlen(src) + 1);
    while (src[index])
    {
        dst[index] = src[index];
        index++;
    }
    dst[index] = '\0';
    return dst;
}

ssize_t ft_instrchr(char *str, int c)
{
    ssize_t index;
   index = 0;
    while (str[index])
    {
        if (str[index] == c)
            return index + 1;
        index++;
    }
    return -1;
}



char *save_line_remain(t_sys *sys)
{
    char *tmp;
    ssize_t i = 0;
    ssize_t end_index = ft_instrchr(sys->stash, '\n');
    tmp = malloc(end_index + 1 + 1);
    if (!tmp)
        return NULL;
    while (i < end_index)
    {
        tmp[i] = sys->stash[i];
        i++;
    }
    tmp[i]='\0';
   sys->stash = save_remain(sys);
    return tmp;

}
char *save_remain(t_sys *sys)
{
    size_t start_index;
    char *tmp;
    size_t i;

    if (!sys->stash)
        return NULL;
    start_index = 0;
    start_index = ft_instrchr(sys->stash, '\n');
    if (start_index != -1)
    {
        tmp = malloc(ft_strlen(sys->stash + start_index) + 1);
        if (!tmp)
            return NULL;
        i = 0;
        while (sys->stash[start_index])
            tmp[i++] = sys->stash[start_index++];
        tmp[i] = '\0';
        free(sys->stash);
        sys->stash = tmp;
        return sys->stash;
    }
    return sys->stash;
}
            

    
char *ft_strchr(char *str, int c)
{
   static size_t index = 0;
    if (!str)
        return NULL;
    while (str[index])
    {
        if (str[index] == c)
            return &str[index];
        index++;
    }
    return NULL;
}

size_t ft_strlen(char *str)
{
    size_t count = 0;
    while (str[count])
        count++;
    return count;
}

char *ft_strjoin(char *s1, char *s2)
{
    if (!s1)
        return copy(s2);
    if (!s2)
        return (s1);
   char * new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
   if (!new)
       return NULL;
   size_t index = 0;
   while (s1[index])
   {
       new[index] = s1[index];
       index++;
   }
   size_t j = 0;
   while (s2[j])
   {
       new[index + j] = s2[j];
       j++;
   }
   new[index + j] = '\0';
   return new; 
}
    
