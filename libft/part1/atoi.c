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
    size_t i = 0;
    long result= 0;
    int sign = 1;
    if (nptr[0] == '-' || nptr[0] == '+')
    {
       if (nptr[i] == '-')
                sign= -1; 
    }
    i = 1;
    while (nptr[i] != '\0' && ('0' <= nptr[i] && nptr[i] <= '9'))
    {
        result = result * 10 + nptr[i] - '0';  
        i++; 
        printf("%ld\n",result);
    }
    return(check_result(result*sign)) ;
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
    




