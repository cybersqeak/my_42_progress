/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:59:33 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 17:42:22 by cmichele         ###   ########.fr       */
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
	size_t			*index;
	int			*bytes;
	int			*specifier;
	const char	*format;
	va_list		args;
	int			error_flag;
}				t_info;

int				check_specifier(const char c);
int				ft_printf(const char *format, ...);
void			writing(t_info *info);
int				ft_strlen(const char *str);
void			s_w(const char *str, t_info *info);
void			c_w(int  c, t_info *info);
void			p_w(void *p, t_info *info);
void			d_w(int d, t_info *info);
void			u_w(unsigned int ld, t_info *info);
void			h_w(unsigned int x, t_info *info);
void			uph_w(unsigned int x, t_info *info);
void			per_write(t_info *info);
char			*unsigneditoa(unsigned int n);
char			*ft_itoa(int n);
int				check_error(t_info *info);
#endif
