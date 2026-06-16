#include<string.h>
#include <stdio.h>

void	*ft_memcpy(int *dest,const int *src,size_t n)
{
	int  i = 0;	
	printf("the address of dest:in memcpy before: %p\n",dest);	
	printf("the address of src:in memcpy at before: %p\n",src);	
	int  *tmp;
	tmp = (int *)src;
	 int *d;
	d = (int *)dest;
	printf("the address of dest:in memcpy after: %p\n",d);	
	printf("the address of src:in memcpy at after: %p\n",tmp);	
	printf("this is  not unsgined char now it still a int %d\n",d[0]);
	while (i < n)
	{
		d[i] =tmp[i];
		i++;
	}	
	return (dest);
}
	 

				


			
int main() {
	const    int src[] = {1,30,10};
//	const char src[] = "hello";
int array[3];
int *dest = &array[0];
int dest2[3]={1,2,3};																																																																																																																																														
	printf("the address of dest:in memcpy at very first: %p\n",dest2);	
	printf("the address of src:in memcpy at very first: %p\n",src);	
	   memcpy(dest, src, sizeof(src));
//	ft_memcpy(dest2,src,sizeof(src));
    printf("Copied elements: ");
     for (int i = 0; i < 3; i++) {
    //    printf("%s ",(char*)memcpy(dest, src + 4, 4 * sizeof(char)));// wtf did happen here?
			printf("%d",dest2[i]);
			printf("%c",',');
	
    }

    	printf("\n");
    	printf("Copied elements: ");
   for (int i = 0; i <3; i++) {
    //    printf("%s ",(char*)memcpy(dest, src + 4, 4 * sizeof(char)));// wtf did happen here?
			printf("%d",dest[i]);
			printf("%c",',');
	
    }
    printf("\n");
    printf("%ld\n",sizeof(dest));
	printf("%ld\n",sizeof(dest2));
	printf("%ld\n",sizeof(char *));
    return (0);
}

