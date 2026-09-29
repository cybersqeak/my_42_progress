/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 08:17:52 by cmichele          #+#    #+#             */
/*   Updated: 2026/09/29 08:18:48 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_sys
{
	int		count;
	char	*buff;
	int		fd;

}			t_sys;

char		*get_next_line(int fd);
// void go_next_line_utils(int some);
ssize_t		read_one_chunk(t_sys *sys);
void		update_buffer(t_sys *sys);
void		check_buffer(t_sys *sys);
ssize_t		ft_strlen(char *str);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strchr(char *s1, char c);
char		*cut(char *src, ssize_t len);
char		*cut_remain(char *src, ssize_t index, ssize_t start);
char		*ft_dup(char *src, ssize_t size);

#endif
