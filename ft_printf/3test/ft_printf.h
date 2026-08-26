/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:59:33 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/26 11:59:36 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define	FT_PRINTF

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>	
#include <stdlib.h>

#define ERROR -1
#define NONE  97
int check_specifier(const char c);
int ft_printf(const char *format,...);




int writing(const char *str,int *index,int *specifier);


int ft_strlen(const char *str);
int write_str(char *str,int *index);
int write_char(int c,int *index);
int write_pointer(void *ptr, int *index);
int write_digits(int d, int *index);
int unsigned_write(unsigned int i, int *index);
int pointer_write(void *ptr, int *index);
int hex_write(unsigned int x, int *index);
int HEX_write(unsigned int x, int *index);
int per_write(int *index);
char	*unsigneditoa(unsigned int n);
char *ft_itoa(int n);
#endif
