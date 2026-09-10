#include "get_next_line.h"






int   read_buff(t_sys *sys)
{
    ssize_t read_byte;
    read_byte = read(sys->fd, sys->buff, BUFFER_SIZE);
    if (read_byte <= 0)
    {
        if (read_byte == -1)
        {
            printf ("an unexpected error occured\nassigning ERROR flag...\n");
            sys->flags[1] = 1;
            return ERROR;
        }
        printf("emtpy file or all contend read already\nassigning the END flag...\n");
        sys->flags[2] = 1;
        return END;
    }
    return SUCCESS;

        


















int read_new(t_sys *sys)
{
    if (sys->flags[0] == 0)
    {
        printf("here i am\n");
        sys->count = read(sys->fd, sys->buff, BUFFER_SIZE);
        sys->buff[BUFFER_SIZE] = '\0';
        if (sys->count == -1)
            return ERROR;
        else if (sys->count == 0)
            return END;
        sys->flags[0]= 1;
    }
    return SUCCESS;
}

char *check_return(t_sys *sys)
{
    if (sys->flags[1] == 1)
        return NULL;
    return sys->current_buff;
}
void copy(t_sys *sys, size_t size)
{
     ssize_t i = 0;
    while (i < size)
    {
        sys->current_buff[i] = sys->buff[sys->index];
        i++, (sys->index)++;
    }
    sys->current_buff[i] = '\0';
}

int find_newline(t_sys *sys)
{
    size_t size = 0;
    size_t i = sys->index;
   while (sys->buff[i] && sys->buff[i] != '\n')
      i++, size++;
   if (sys->buff[i] == '\n')
   {

       sys->current_buff = malloc(size + 1 + 1);
       if (!sys->current_buff)
       {
           sys->flags[1] = 1;
           return ERROR;
       }
       copy(sys,size);
       (sys->index)++;
       return SUCCESS;
   }
   else 
   {
       /*save all buffer and read next chunk*/
       sys->current_buff = malloc(BUFFER_SIZE - i + 1);
       sys->flags[0] = 0;
       sys->index = 0;
       return READ;
   }
} 
       

