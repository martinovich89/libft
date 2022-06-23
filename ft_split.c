/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <mhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:22:28 by mhenry            #+#    #+#             */
/*   Updated: 2022/06/23 18:01:52 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static int	get_tablen(const char *s, char c)
{
	char	ptr[2];
	size_t	i;
	size_t	ret;

	ret = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i += ft_skipcharset((char *)s + i, ft_chartostr(ptr, c));
		else
		{
			ret++;
			i += ft_skipnoncharset((char *)s + i, ft_chartostr(ptr, c));
		}
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	iter[3];
	char	ptr[2];
	size_t	len;

	len = get_tablen(s, c);
	tab = ft_calloc(len + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	ft_bzero(iter, sizeof(size_t) * 3);
	while (iter[0] < len && s[iter[1]])
	{
		iter[1] += ft_skipcharset(s + iter[1], ft_chartostr(ptr, c));
		iter[2] = iter[1];
		iter[1] += ft_skipnoncharset(s + iter[1], ft_chartostr(ptr, c));
		tab[iter[0]] = ft_substr(s, iter[2], iter[1] - iter[2] + 1);
		iter[0]++;
	}
	return (tab);
}
