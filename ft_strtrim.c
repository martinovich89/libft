/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <mhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:23:23 by mhenry            #+#    #+#             */
/*   Updated: 2022/06/23 16:26:06 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	len;
	size_t	i;
	size_t	amount_trimmed;

	amount_trimmed = 0;
	i = 0;
	while (s1[i] && ft_ischarset(s1[i++], (char *)set))
		amount_trimmed++;
	if (amount_trimmed >= ft_strlen(s1))
		return (ft_strdup(""));
	i = ft_strlen(s1);
	while (--i > 0 && ft_ischarset(s1[i], (char *)set))
		amount_trimmed++;
	len = ft_strlen(s1) - amount_trimmed;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i] && ft_ischarset(s1[i], (char *)set))
		i++;
	ft_strlcpy(ptr, s1 + i, len + 1);
	return (ptr);
}
