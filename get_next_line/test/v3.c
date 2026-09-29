

/* ************************************************************************** */
/*                                                                            */ /*                                                        :::      ::::::::   */ /*   get_next_line.c                                    :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 08:17:45 by cmichele          #+#    #+#             */
/*   Updated: 2026/09/29 08:38:18 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int check_space(char *memory,size_t size)
{ if (size == ft_strlen(memory) + 1)
		return 1;
	return 0;
}

ssize_t	ft_strlen(char *str)
{
	ssize_t	count;

	count = 0;
	if (!str)
		return (0);
	while (str[count])
		count++;
	return (count);
}

char	*get_tail(char *stash)
{
	char	*tail;
	char	*old_stash;
	ssize_t	index;
	ssize_t	start;

	index = 0;
	while (stash[index])
	{
		if (stash[index] == '\n')
		{
			start = index + 1;
			index++;
			break ;
		}
		index++;
	}
	if (stash[index] == '\0')
		start = index;
	while (stash[index])
		index++;
	tail = cut_remain(stash, index, start);
	old_stash = stash;
	stash = ft_dup(tail, ft_strlen(tail));
	free(old_stash);
	return (stash);
}

char	*get_line(char *stash)
{
	char	*l;
	ssize_t	len;

	len = 0;
	while (stash[len] && stash[len] != '\n')
		len++;
	l = cut(stash, len);
	return l;
}

char	*read_buffer(int fd, char *stash)
{
	char	*buff;
	char	*tmp;
	ssize_t pre_bytes;
	ssize_t	bytes = 0;

	buff = malloc(BUFFER_SIZE*10 + 1);
	if (!buff)
		return (free(stash), NULL);
	while (1)
	{
		bytes += read(fd, buff, BUFFER_SIZE);
		buff[bytes]="\0";
		if (bytes <= pre_bytes)
			break;
		if (bytes >= BUFFER_SIZE*10 + 1 )
		{
			tmp = buff;
			buff = malloc(ft_strlen(tmp) * 2);
			if (!buff)
				return NULL;
			buff = ft_dup(tmp,ft_strlen(tmp));
			free(tmp);
		}





	}
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_buffer(fd, stash);
	if (!stash || stash[0] == '\0')
		return (NULL);
	line = get_line(stash);
	stash = get_tail(stash);
	return (line);
}

