/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <mhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:21:31 by mhenry            #+#    #+#             */
/*   Updated: 2022/06/23 18:00:14 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

size_t	nblen(size_t nb)
{
	size_t	i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		sign;

	sign = (n >= 0) * 2 - 1;
	if (n == -2147483648)
		return (ft_strdup("-2147482648"));
	n *= sign;
	len = nblen(n);
	len += (sign - 1) / -2;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	while (len-- > 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
