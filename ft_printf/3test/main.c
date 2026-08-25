#include "ft_printf.h"

int main(void)
{
    char s = 'a';
  char *c = &s;
  printf("\n\n%d\n\n\n",ft_printf("hello%%,%c, %d",'f',7+3));
 
  //printf("\n\n%d\n\n\n",ft_printf("hello %s%c","cesare",'T'));
  // printf("\n\n%d\n\n\n",ft_printf("hello%myname is %s %c","takeo","T"));
   return 0;
}
