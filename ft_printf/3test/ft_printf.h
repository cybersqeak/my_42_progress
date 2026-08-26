/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:59:33 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/27 08:31:30 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define ERROR -1
# define NONE 0

typedef struct s_info
{
	int			*index;
	int			*bytes;
	int			*specifier;
	const char	*format;
	va_list		args;
}				t_info;

int				check_specifier(const char c);
int				ft_printf(const char *format, ...);
int				writing(const char *str, int *index, int *specifier);
int				ft_strlen(const char *str);
int				s_w(char *str, int *index);
int				c_w(int c, int *index);
int				p_w(void *ptr, int *index);
int				d_w(int d, int *index);
int				u_w(unsigned int i, int *index);
int				h_w(unsigned int x, int *index);
int				uph_w(unsigned int x, int *index);
int				per_write(int *index);
char			*unsigneditoa(unsigned int n);
char			*ft_itoa(int n);
#endif
