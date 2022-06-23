/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <mhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:21:50 by mhenry            #+#    #+#             */
/*   Updated: 2022/06/23 19:02:15 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

/*
** WARNING :
** You MUST pass a reference to the pointer you want to clear,
** even tho the function takes a void * parameter
*/
void	ft_memdel(void *ptr)
{
	void	**recup;

	recup = (void **)ptr;
	if (*recup)
	{
		free(*recup);
		*recup = NULL;
	}
}
