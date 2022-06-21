#include "../headers/libft.h"

char *ft_strdup(const char *s)
{
	char	*ptr;

	ptr = malloc(ft_strlen(s));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, ft_strlen(s));
	return (ptr);
}