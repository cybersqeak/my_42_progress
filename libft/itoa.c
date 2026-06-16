#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
//first lets count how many index it needs/

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
       // printf("i am here\n");
    }
    if ((nptr[i] == '-' || nptr[i] == '+') /*&& sign_flag == 1*/)
    {   
       // sign_flag = 0;
        //space_flag = 0;
        //printf("I AM HERE JUST ONCE\n");
        if (nptr[i] == '-')
        {
            sign = -1;
         //   printf("I AM NEGATIVE NOW \n");
        }
        //printf("%d\n",i);
        i++;
        //printf("%d\n",i);
    }
    //i++;
    while('0' <= nptr[i] && nptr[i] <= '9')
    {
        result = result * 10  + nptr[i] - '0';
        i++;
    }
    return (result * sign);
}

char *make_string(size_t size, int number)
{
   // printf("Making the string here.\n");
    char *acsii = malloc((size) * sizeof(char));
    int i = 0;
    if (!(acsii))
        return (NULL);
    if (number < 0)
    {
        acsii[0] = '-';
        number = number * (-1);
        
    }
    while (number /10 != 0)
    {
        printf("the number is now %d\n",number);
        printf("here i am\n");
        printf("the size is : %ld\n\n",size);
        acsii[size - 1 - i] = 'A';              //(char)(number % 10) + '\0'; 
        //printf("the character that i want to insert %c\n",(number % 10) + (int)'\0');
        for (int k = 0; k <= size;k++)
        {
            printf("the element of acsii[%d] is : %c\n",k,acsii[k]);
        }
        number = number / 10;
        i++;
    }
    acsii[size] = '\0';
    write(1,acsii,5);
    return (acsii);
}

int check_keta(int n)
{
    int set = n;
    int count= 1;
    //printf("i am here and tthe value of set is now : %d\n",set);
    if (set < 0)
    {
        count++;
        set = set * (-1);
    }
    while (set / 10 != 0)
    {
     //   printf("i am herew :");
        count++;
        set = set / 10;
      //  printf("the count is %d\n:", count);
       // printf("the set value is now  %d\n:",set);
    }
    return(count);
}


int main(int argc, char** argv)
{

    if (argc == 2 )
    {
        int number = ft_atoi(argv[argc-1]);
        printf("the number entered : %d\n",number);
        printf("the letter count is : %d\n\n\n\n",check_keta(number));
        printf("the return string is : %s\n",make_string(check_keta(number) + 1 , number));        
    }

    return (0);
}

          



/*
char *ft_itoa(int n)
{
   */

