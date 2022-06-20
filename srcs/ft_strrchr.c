#include "../headers/libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	while (i > 0 && s[i] != c)
		i--;
	return ((char *)((s[i] == c) * (ptrdiff_t)s[i]));
}