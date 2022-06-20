#include "../headers/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n && ptr1[i] && ptr1[i] == ptr2[i])
		i++;
	return ((n != 0) * (ptr1[i] - ptr2[i]));
}
