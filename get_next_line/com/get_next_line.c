/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 10:05:49 by cmichele          #+#    #+#             */
/*   Updated: 2026/10/02 10:18:31 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	fill_buf(int fd, t_buf *b)
{
	ssize_t	n;

	n = 1;
	while (n > 0)
	{
		if (!grow_buf(b))
			return (-1);
		n = read(fd, b->data + b->len, BUFFER_SIZE);
		if (n < 0)
			return (-1);
		b->len += n;
		b->data[b->len] = '\0';
		if (n > 0 && ft_strchr(b->data + b->len - n, '\n'))
			break ;
	}
	return (0);
}

static char	*read_to_stash(int fd, char *stash)
{
	t_buf	b;

	if (ft_strchr(stash, '\n'))
		return (stash);
	b.data = NULL;
	b.len = 0;
	b.cap = 0;
	if (fill_buf(fd, &b) < 0)
		return (free(b.data), free(stash), NULL);
	stash = join_free(stash, b.data);
	free(b.data);
	return (stash);
}

static char	*extract_line(char *stash)
{
	char	*line;
	size_t	len;
	size_t	i;

	len = 0;
	while (stash[len] && stash[len] != '\n')
		len++;
	if (stash[len] == '\n')
		len++;
	line = malloc(len + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (i < len)
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*trim_stash(char *stash)
{
	char	*rest;
	size_t	start;
	size_t	i;

	start = 0;
	while (stash[start] && stash[start] != '\n')
		start++;
	if (stash[start] == '\n')
		start++;
	if (!stash[start])
		return (free(stash), NULL);
	rest = malloc(ft_strlen(stash) - start + 1);
	if (!rest)
		return (free(stash), NULL);
	i = 0;
	while (stash[start])
		rest[i++] = stash[start++];
	rest[i] = '\0';
	return (free(stash), rest);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_to_stash(fd, stash);
	if (!stash || !*stash)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	line = extract_line(stash);
	if (!line)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	stash = trim_stash(stash);
	return (line);
}
