/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 10:05:43 by cmichele          #+#    #+#             */
/*   Updated: 2026/10/02 10:20:11 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*join_free(char *stash, char *buf)
{
	char	*res;
	size_t	i;
	size_t	j;

	res = malloc(ft_strlen(stash) + ft_strlen(buf) + 1);
	if (!res)
		return (free(stash), NULL);
	i = 0;
	while (stash && stash[i])
	{
		res[i] = stash[i];
		i++;
	}
	j = 0;
	while (buf[j])
	{
		res[i + j] = buf[j];
		j++;
	}
	res[i + j] = '\0';
	free(stash);
	return (res);
}

int	grow_buf(t_buf *b)
{
	char	*new;
	size_t	cap;
	size_t	i;

	if (b->data && b->cap >= b->len + BUFFER_SIZE + 1)
		return (1);
	cap = BUFFER_SIZE * 10 + 1;
	if (b->cap)
		cap = b->cap * 2;
	new = malloc(cap);
	if (!new)
		return (0);
	i = 0;
	while (i < b->len)
	{
		new[i] = b->data[i];
		i++;
	}
	free(b->data);
	b->data = new;
	b->cap = cap;
	return (1);
}
