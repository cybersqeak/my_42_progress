#include "ft_printf.h"

int main(void)
{
   printf("\n\n%d\n",ft_printf("hello"));
   printf("\n\n%d\n",ft_printf("hello%"));
   printf("\n\n%d\n",ft_printf("hello%c",'H'));
   return 0;
}
