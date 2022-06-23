/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenry <mhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:23:33 by mhenry            #+#    #+#             */
/*   Updated: 2022/06/23 17:57:51 by mhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

/*
** WARNING :
** You MUST pass a reference to the pointer to pointer you want to clear,
** even tho the function takes a void * parameter
** WARNING :
** The tab MUST be NULL terminated
*/
void	ft_tabdel(void *tab)
{
	void	***recup;
	size_t	i;

	recup = (void ***)tab;
	i = 0;
	while ((*recup)[i])
	{
		ft_memdel(*recup + i);
		i++;
	}
	ft_memdel(recup);
}
