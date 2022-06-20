#include "../headers/libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	ret;

	len = ft_strlen(dst);
	if (len > size)
		return (len + size);
	i = len;
	j = 0;
	while (i + j < size - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	ret = len + ft_strlen(src);
	return (ret);
}