#include "../headers/libft.h"

int	ft_skipcharset(char *str, char *set)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_ischarset(str[i], set))
		i++;
	return (i);
}