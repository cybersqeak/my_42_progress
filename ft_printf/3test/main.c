/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:14 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 17:04:22 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	 
	printf("=== %%x / %%X ===\n");
	ft_printf("%i\n", 16);
	printf("\n%d\n", printf("%x\n", 16));
	printf("\n%d\n", ft_printf("%X\n", 32));
	printf("\n%d\n", printf("%X\n", 32));
	printf("\n%d\n", ft_printf("%x\n", -1));
	printf("\n%d\n", printf("%x\n", -1));
	printf("\n%d\n", ft_printf("%X\n", 4096));
	printf("\n%d\n", printf("%X\n", 4096)); 

printf("\n\n%d\n\n\n", ft_printf("1000 in hexa is %X\n", 1000));
	printf("\n\n%d\n\n\n", printf("1000 in hexa is %X\n", 1000));
	char	s;
	char	*c;
	int i;
	s = 'a';
	c = &s;
	printf("\n%d\n", ft_printf("%u", -5));
	printf("\n%d\n", printf("%u", -5));
	printf("\n\n%d\n\n\n", ft_printf("hello %s%c", "cesare", 'T'));
	printf("\n\n%d\n\n\n", printf("hello %s%c", "cesare", 'T'));
	printf("hexadecimals\n\n\n\n\n\n\n\n");
	printf("\n\n%d\n\n\n", ft_printf("1000 in hexa is %x\n", 1000));
	printf("\n\n%d\n\n\n", printf("1000 in hexa is %x\n", 1000));
	printf("\n\n%d\n\n\n", ft_printf("pointer is  %p\n", c));
	printf("\n\n%d\n\n\n", printf("pointer is  %p\n", c));
	printf("\n\n%d\n\n\n", ft_printf("256 in hexa is %x\n", 256));
	printf("\n\n%d\n\n\n", printf("256 in hexa is %x\n", 256));
	printf("\n\n%d\n\n\n", ft_printf("-2 in hexa is %x\n", -2));
	printf("\n\n%d\n\n\n", printf("-2 in hexa is %x\n", -2));
	printf("\n\n%d\n\n\n", ft_printf("%%%%%%%%%%%%%%%%%% %s %c", "takeo", 'T'));
	printf("\n\n%d\n\n\n", printf("%%%%%%%%%%%%%%%%%% %s %c", "takeo", 'T'));
	printf("=== %%c ===\n");
	printf("\n%d\n", ft_printf("%c\n", 'A'));
	printf("\n%d\n", printf("%c\n", 'A'));
 
	printf("=== %%s ===\n");
	printf("\n%d\n", ft_printf("%s\n", "hello"));
	printf("\n%d\n", printf("%s\n", "hello"));
	printf("\n%d\n", ft_printf("%s\n", ""));
	printf("\n%d\n", printf("%s\n", ""));
 
	printf("=== %%d / %%i ===\n");
	printf("\n%d\n", ft_printf("%d\n", 0));
	printf("\n%d\n", printf("%d\n", 0));
	printf("\n%d\n", ft_printf("%d\n", -42));
	printf("\n%d\n", printf("%d\n", -42));
	printf("\n%d\n", ft_printf("%d\n", INT_MAX));
	printf("\n%d\n", printf("%d\n", INT_MAX));
	printf("\n%d\n", ft_printf("%d\n", INT_MIN));
	printf("\n%d\n", printf("%d\n", INT_MIN));
 
	printf("=== %%u ===\n");
	printf("\n%d\n", ft_printf("%u\n", 0));
	printf("\n%d\n", printf("%u\n", 0));
	printf("\n%d\n", ft_printf("%u\n", -1));
	printf("\n%d\n", printf("%u\n", -1));
 
	printf("=== %%x / %%X ===\n");
	printf("\n%d\n", ft_printf("%x\n", 10));
	printf("\n%d\n", printf("%x\n", 10));
	printf("\n%d\n", ft_printf("%X\n", 1));
	printf("\n%d\n", printf("%X\n", 1));
	printf("\n%d\n", ft_printf("%x\n", -1));
	printf("\n%d\n", printf("%x\n", -1));
	printf("\n%d\n", ft_printf("%X\n", 4096));
	printf("\n%d\n", printf("%X\n", 4096));
 
	printf("=== %%p ===\n");
	printf("\n%d\n", ft_printf("%p\n", c));
	printf("\n%d\n", printf("%p\n", c));
	i = 100;
	printf("\n%d\n", ft_printf("%p\n", &i));
	printf("\n%d\n", printf("%p\n", &i));
 
	printf("=== %% literal ===\n");
	printf("\n%d\n", ft_printf("100%%\n"));
	printf("\n%d\n", printf("100%%\n"));
 
	printf("=== mixed ===\n");
	printf("\n%d\n", ft_printf("%s is %d, hex: %x, ptr: %p\n", "Bob", 30, 30, &s));
	printf("\n%d\n", printf("%s is %d, hex: %x, ptr: %p\n", "Bob", 30, 30, &s));
	return (0);
}
 

