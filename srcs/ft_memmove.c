#include "../headers/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
	{
		if (src > dest)
			*d++ = *s++;
		else
			d[n] = s[n];
	}
	return (dest);
}