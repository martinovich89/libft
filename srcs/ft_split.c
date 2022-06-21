#include "../headers/libft.h"

static int	get_tablen(const char *s, char c)
{
	size_t	i;
	size_t	ret;

	ret = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i += ft_skipcharset((char *)s, &c);
		else
		{
			ret++;
			while (s[i] && !ft_ischarset(s[i], &c))
				i++;
		}
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	k;
	size_t	i;
	size_t	j;

	k = get_tablen(s, c);
	tab = ft_calloc(k + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < k)
	{
		j = 0;
		while (s[j] == c)
			j++;
		k = j;
		while (s[j] != c)
			j++;
		tab[i] = malloc(sizeof(char) * (j - k + 1));
		if (!tab[i])
			return (NULL);
		ft_strlcpy(tab[i], &s[j], j - k + 1);
	}
	return (tab);
}