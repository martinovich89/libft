#include "../headers/libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return ((char *)((s[i] == c) * (ptrdiff_t)s[i]));
}