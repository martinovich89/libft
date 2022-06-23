/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <mhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:20:21 by mhenry            #+#    #+#             */
/*   Updated: 2022/06/23 17:54:40 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		ret;

	i = 0;
	while (nptr[i] == ' ')
		i++;
	sign = (nptr[i] == '-') * -2 + 1;
	if (ft_ischarset(nptr[i], "+-"))
		i++;
	ret = 0;
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		ret *= 10;
		ret += nptr[i] - 48;
		i++;
	}
	return (ret * sign);
}
