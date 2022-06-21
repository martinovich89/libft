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