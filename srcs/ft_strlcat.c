#include "../headers/libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	ret;

	len = ft_strlen(dst);
	i = len;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	ret = len + ft_strlen(src);
	if (ret > size)
		return (size);
	return (ret);
}