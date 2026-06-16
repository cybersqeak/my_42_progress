#include<stdlib.h>
#include <stdio.h>
#include <unistd.h>

int check_result(long num)
{
    if (!(-2147483648 <= num && num <=  2147483647))
        return (0);
    else
        return (num);
}
int ft_atoi(const char *nptr)
{
//    int space_flag = 1;
  //  int sign_flag = 1;
    int sign = 1;
    int i = 0;
    int result = 0;
    
    while ((0 < nptr[i] && nptr[i] <= 32) /*&& space_flag == 1*/)
    {
        i++;
        printf("i am here\n");
    }
    if ((nptr[i] == '-' || nptr[i] == '+') /*&& sign_flag == 1*/)
    {   
       // sign_flag = 0;
        //space_flag = 0;
        printf("I AM HERE JUST ONCE\n");
        if (nptr[i] == '-')
        {
            sign = -1;
            printf("I AM NEGATIVE NOW \n");
        }
        printf("%d\n",i);
        i++;
        printf("%d\n",i);
    }
    //i++;
    while('0' <= nptr[i] && nptr[i] <= '9')
    {
        result = result * 10  + nptr[i] - '0';
        i++;
    }
    return (result * sign);
}


    
   










int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("the real atoi returns : %d\n",atoi(argv[argc - 1]));
        printf("the fake atoi returns : %d\n",ft_atoi(argv[argc - 1]));
        return (0);
    }
    return (1);
}
    




