#include <stdio.h>
unsigned int power(unsigned int i)
{
    unsigned int k = 0;
    unsigned int n = 1;
    
    while (k<=i)
    {
        n *= 2;
        k++;
    
    }
    return n;
}
        
int main(void)
{
    unsigned int n = 0;
    for (int i = 0; i <= 32; i++)
    {
        n += power(i);
    }
    n += 1;
    printf("%u\n",n);
}


