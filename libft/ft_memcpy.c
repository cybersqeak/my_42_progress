#include<string.h>
#include <stdio.h>
void	*ft_memcpy(void *dest,const void *src,size_t n)
{
	unsigned char *d ;
	unsigned char *s;
	size_t i;
	d= (unsigned char *)dest;
	s = (unsigned char *)src ;
	if (!dest || !src)
	return (dest);	
	// printf("the address of dest:in memcpy before: %p\n",dest);	
	// printf("the address of src:in memcpy at before: %p\n",src);	
	// int  *tmp;
	// tmp = (int *)src;
	//  int *d;
	// d = (int *)dest;
	// printf("the address of dest:in memcpy after: %p\n",d);	
	// printf("the address of src:in memcpy at after: %p\n",tmp);	
	// printf("this is  not unsgined char now it still a int %d\n",d[0]);
	i = 0;
	while (i < n)
	{
		d[i] =s[i];
		i++;
	}	
	return (dest);
}
	 
		


			
int main() {
	//const    int src[] = {1,30,10};
//	const char src[] = "hello";
// int array[3];
// int *dest = &array[0];
// int dest2[3]={1,2,3};																																																																																																																																														
// 	printf("the address of dest:in memcpy at very first: %p\n",dest2);	
// 	printf("the address of src:in memcpy at very first: %p\n",src);	
// 	   memcpy(dest, src, sizeof(src));
// //	ft_memcpy(dest2,src,sizeof(src));
//     printf("Copied elements: ");
//      for (int i = 0; i < 3; i++) {
//     //    printf("%s ",(char*)memcpy(dest, src + 4, 4 * sizeof(char)));// wtf did happen here?
// 			printf("%d",dest2[i]);
// 			printf("%c",',');
	
//     }

//     	printf("\n");
//     	printf("Copied elements: ");
//    for (int i = 0; i <3; i++) {
//     //    printf("%s ",(char*)memcpy(dest, src + 4, 4 * sizeof(char)));// wtf did happen here?
// 			printf("%d",dest[i]);
// 			printf("%c",',');
	
//     }
//     printf("\n");
//     printf("%ld\n",sizeof(dest));
// 	printf("%ld\n",sizeof(dest2));
// 	printf("%ld\n",sizeof(char *));
//     return (0);



const char *src = "hello";
char dest[6];
char dest1[6];
printf("the return value of my function is %s\n",(char *)ft_memcpy(dest,src,6));
printf("the return value of real function is %s\n",(char *)memcpy(dest,src,6));
}

