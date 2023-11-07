/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:07:05 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/06 15:59:36 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

static size_t	count_words(char const *s, char c)
{
	int	res;

	res = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (*s)
			++res;
		while (*s && *s != c)
			++s;
	}
	return (res);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	res;

	res = 0;
	while (s[res] && s[res] != c)
		++res;
	return (res);
}

static char	*dup_word(char const *s, char c)
{
	return (ft_strndup_e(s, get_word_len(s, c)));
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	int		i;
	char	**res;

	word_count = count_words(s, c);
	i = 0;
	res = malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	while (i < word_count)
	{
		while (*s == c)
			++s;
		res[i] = dup_word(s, c);
		while (*s && *s != c)
			++s;
		++i;
	}
	res[i] = NULL;
	return (res);
}
