/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:59 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 20:01:02 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2 || n == 0)
		return (0);
	while (*s1 && i + 1 < n)
	{
		if (*s1 != *s2)
			break ;
		++s1;
		++s2;
		++i;
	}
	return (*s1 - *s2);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (*s1 && i && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}