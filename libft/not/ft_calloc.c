#include <stdio.h>
#include <stdlib.h>

void    ft_bzero(void *s, size_t size)
{
    unsigned char *converted_s = (unsigned char*)s;
    size_t index = 0;
    while (index < size)
    {
        printf("here\n");
        converted_s[index] = '1';// i want to test if this really prints...
        index++;
    }
    return ;
}
void *ft_calloc(size_t nmemb, size_t size)
{
   void *allocated_memory = malloc(nmemb * size);
   if (!(allocated_memory))
       return (NULL);
   ft_bzero(allocated_memory,nmemb * size); // set elements to zero. 
   return (allocated_memory);
}


int main(void)
{
    int* p1 = calloc(4, sizeof(int));    // allocate and zero out an array of 4 int
    int* p2 = calloc(4, sizeof(int)); // same, naming the array type directly
    int* p3 = ft_calloc(4, sizeof(char));     // same, without repeating the type name

    if (p2)
    {
        for (int n = 0; n < 4; ++n) // print the array
        {  
            printf("p2[%d] == %c ", n, p2[n]);
            printf("p2[%d] == %ld\n\n\n", n, sizeof(p2[n]));
        }
        for (int n = 0; n < 4; ++n)
        {
            printf("p3[%d] == %c ", n, p3[n]);
            printf("p3[%d] == %ld\n\n\n", n, sizeof(p3[n]));
        }

    }

    free(p3);
    free(p2);
    free(p1);
    for (int n = 0; n < 4; ++n)
        {
            printf("p3[%d] == %c ", n, p3[n]);
            printf("p3[%d] == %ld\n\n\n", n, sizeof(p3[n]));
        }


}
