/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipcharset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <mhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:22:18 by mhenry            #+#    #+#             */
/*   Updated: 2022/06/23 17:56:24 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_skipcharset(const char *str, const char *set)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_ischarset(str[i], set))
		i++;
	return (i);
}
