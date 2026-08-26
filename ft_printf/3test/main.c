#include "ft_printf.h"

int main(void)
{
    char s = 'a';
  char *c = &s;
/*  printf("\n%d\n",ft_printf("%u",-5));
    printf("\n%d\n", printf("%u",-5));
 
  printf("\n\n%d\n\n\n",ft_printf("hello %s%c","cesare",'T'));
printf("\n\n%d\n\n\n",printf("hello %s%c","cesare",'T'));*/
//printf("hexadecimals\n\n\n\n\n\n\n\n");
    printf("\n\n%d\n\n\n",ft_printf("1000 in hexa is %X\n",1000));
  printf("\n\n%d\n\n\n",printf("1000 in hexa is %X\n",1000 ));
  printf("\n\n%d\n\n\n",ft_printf("1000 in hexa is %x\n",1000));
  printf("\n\n%d\n\n\n",printf("1000 in hexa is %x\n",1000 ));
  printf("\n\n%d\n\n\n",ft_printf("pointer is  %p\n",c));
  printf("\n\n%d\n\n\n",printf("pointer is  %p\n",c));
  
/*
  printf("\n\n%d\n\n\n",ft_printf("256 in hexa is %x\n",256 ));
  printf("\n\n%d\n\n\n",printf("256 in hexa is %x\n",256 ));
 
printf("\n\n%d\n\n\n",ft_printf("-2 in hexa is %x\n",-2));
printf("\n\n%d\n\n\n",printf("-2 in hexa is %x\n",-2 ));

 //printf("\n\n%d\n\n\n",ft_printf("hello%myname is %s %c","takeo",'T'));
  //printf("\n\n%d\n\n\n",printf("hello%myname is %s %c","takeo",'T')); // turns out %m prints success or error
*/
   return 0;
}
