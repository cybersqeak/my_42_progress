/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:40:08 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:40:22 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main() {
// const    int src[] = {1,30,10};
//	const char src[] = "hello";
// int array[3];
// int *dest = &array[0];
// int dest2[3]={1,2,3};
// 	printf("the address of dest:in memcpy at very first: %p\n",dest2);
// 	printf("the address of src:in memcpy at very first: %p\n",src);
// 		memcpy(dest, src, sizeof(src));
// //	ft_memcpy(dest2,src,sizeof(src));
//     printf("Copied elements: ");
//      for (int i = 0; i < 3; i++) {
//     //    printf("%s ",(char*)memcpy(dest, src + 4, 4
//	* sizeof(char)));// wtf did happen here?
// 			printf("%d",dest2[i]);
// 			printf("%c",',');

//     }

//     	printf("\n");
//     	printf("Copied elements: ");
//    for (int i = 0; i <3; i++) {
//     //    printf("%s ",(char*)memcpy(dest, src + 4, 4
//	* sizeof(char)));// wtf did happen here?
// 			printf("%d",dest[i]);
// 			printf("%c",',');

//     }
//     printf("\n");
//     printf("%ld\n",sizeof(dest));
// 	printf("%ld\n",sizeof(dest2));
// 	printf("%ld\n",sizeof(char *));
//     return (0);

/*
const char	*src = "hello";
char		dest[6];
char		dest1[6];
printf("the return (value of my function is
	%s\n",(char *)ft_memcpy(dest,src,6)));
printf("the return (value of real function is
	%s\n",(char *)memcpy(dest,src,6)));
}
*/
