#include "libft.h"
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
//first lets count how many index it needs/

#define NEGATIVE -1

char *create_ascii(long n, int elements, int sign)
{
    int index;
    char *ascii;

    ascii = malloc(sizeof(char)*(elements+1));
    if (!ascii)
        return NULL;
    index = 1;
    ascii[elements]='\0'; 
    while (n / 10 != 0)
    {
        ascii[elements - index] = (char)(n % 10) + '0';
        printf("the char is %c\n",ascii[elements - index]);
        n = n / 10;
        index++;
    }
    ascii[elements - index] = (char)(n % 10) + '0';
    printf("the char is %c\n",ascii[elements - index]);

    index++;
    if (elements - index == 0 && sign == NEGATIVE)
        {
            printf("i am here\n");
            ascii[elements - index] = '-';
            return ascii;
        }

    return ascii;
}

char *check_digits(int n)
{
    int count;
    int sign; 
    long set_n;
    long num;

    num = (long)n;
    count = 0;
    sign = 1;
    if (num < 0)
    {
        count++;
        sign = NEGATIVE;
        num = (-1) * num;
    }
    set_n = num;
    while (num / 10 != 0)
    {
        count++;
        num = num / 10;
    }
        num = num / 10;
        count++;
    printf("the digits and sign are %i:%i\n",count,sign);
    return (create_ascii(set_n,count,sign));
}


char *ft_itoa(int n)
{
    return (check_digits(n));
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        char *addr = ft_itoa(num);
        printf("the ascii returned is %s\n", addr);
        free(addr);
        return (0);
    }
}







