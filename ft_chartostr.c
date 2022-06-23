/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chartostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <mhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:20:38 by mhenry            #+#    #+#             */
/*   Updated: 2022/06/23 17:54:56 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_chartostr(char *ptr, char c)
{
	ptr[0] = c;
	ptr[1] = '\0';
	return (ptr);
}
