#include <stdlib.h>
#include "libft.h"
static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_split(char **arr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*word_dup(const char *start, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	word_start;
	size_t	word_count;
	size_t	word_index;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	word_index = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		word_start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > word_start)
		{
			result[word_index] = word_dup(&s[word_start],
					i - word_start);
			if (!result[word_index])
			{
				free_split(result, word_index);
				return (NULL);
			}
			word_index++;
		}
	}
	result[word_index] = NULL;
	return (result);
}


int main(void)
{
	const char src[] = "teeeeeee";
	char c = 't';
	char **result = ft_split(src,c);
	printf("the result of ft_split is : %s\n",*result);
	return 0;

}