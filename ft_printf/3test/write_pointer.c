#include "ft_printf.h"

int write_pointer(void *ptr, int *index)
{
   (*index)++;
   unsigned int *p = (unsigned int *)ptr; 
   
   
   printf("%x\n",*p);
   return 1;
}
