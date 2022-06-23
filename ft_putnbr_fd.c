/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <mhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:22:11 by mhenry            #+#    #+#             */
/*   Updated: 2022/06/23 17:56:15 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static void	recurse(int64_t n, int fd)
{
	if (n > 0)
	{
		recurse(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int64_t	nb;

	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		nb = (int64_t)n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		nb = n;
	recurse(nb, fd);
}
