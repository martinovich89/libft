#include "../headers/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = i;
		while (big[i] && big[i] == little[i - j])
		{
			i++;
			if (little[i - j] == '\0')
				return ((char *)(big + j));
		}
		i += !!big[i];
	}
	return (NULL);
}
