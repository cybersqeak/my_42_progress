
/* ************************************************************************** */
/*                                                                            */ /*                                                        :::      ::::::::   */ /*   get_next_line.c                                    :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 08:17:45 by cmichele          #+#    #+#             */
/*   Updated: 2026/09/29 08:38:18 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int update_buff(char *old_buff,char *new_buff)
{ 
	size_t index;

	index = 0;
	while (old_buff && old_buff[index])
	{
		new_buff[index] = old_buff[index];
		index++;
	}
	new_buff[index] = '\0';
	return index + 1; //copied bytes
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
	char	*old_stash;
	char	*old_buff;
	ssize_t cap;
	ssize_t	bytes = 0;
	ssize_t n = 0;
		
	buff = malloc(BUFFER_SIZE*10 + 1);
	if (!buff)
		return (free(stash), NULL);
	cap = (ssize_t)(BUFFER_SIZE * 10 + 1);
	while (1)
	{
		if (cap < bytes + BUFFER_SIZE + 1)
		{
//			printf("hello i am here at updating buffer if statement\n");
			old_buff = buff;
			cap = cap * 2;
			buff = malloc(cap);
			if (!buff)
				return NULL;
			update_buff(old_buff,buff);
			free(old_buff);
		}
		n = read(fd, buff + bytes, BUFFER_SIZE);
		if (n <= 0)
			break;
		bytes += n;
		buff[bytes]='\0';
		if (buff && ft_strchr(buff, '\n'))
		{
//			printf("hello i am here at null founded  if statement\n");
			old_stash = stash;
			stash = ft_strjoin(old_stash,buff);
			free(old_stash);
			stash = ft_dup(stash,ft_strlen(stash));
			free(buff);
			return stash;
		}
	}
	if (n < 0)
		return free(buff), NULL;

//	printf("hello i am here at not null found statement\n");
	old_stash = stash;
	stash = ft_strjoin(old_stash,buff);
	free(old_stash);
	stash = ft_dup(stash,ft_strlen(stash));
	free(buff);
	return stash;
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

