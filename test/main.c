#include "../headers/libft.h"
#include <bsd/string.h>
#include <strings.h>
#include <ctype.h>

int main(void)
{

	printf("%zu | %zu\n", ft_strlen("bonjour"), strlen("bonjour"));

	printf("%d | %d\n", ft_strcmp("lol", "lol"), strcmp("lol", "lol"));

	printf("%d | %d\n", ft_isalpha('a'), isalpha('a'));

	printf("%d | %d\n", ft_isdigit('0'), isdigit('0'));

	printf("%d\n", ft_isalnum('0'));

	printf("%d\n", ft_isascii(128));

	printf("%d\n", ft_isprint(127));

	printf("%c\n", ft_toupper('c'));

	printf("%c\n", ft_tolower('C'));

	char *str = "bonjour";
	printf("%p | %p\n", ft_strchr(str, 'o'), ft_strchr(str, 'a'));

	printf("%p | %p\n", ft_strrchr(str, 'o'), ft_strrchr(str, 'a'));

	printf("%d | %d\n", ft_strncmp(str, "b", 2), strncmp(str, "b", 2));

	char tab[8] = {'b', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
	ft_memset(tab + 3, 'a', 4);
	printf("%s\n", tab);
	ft_bzero(tab + 4, 3);
	printf("%s\n", tab);

	ft_memcpy(tab, "bonjour", 7);
	printf("%s\n", tab);

	ft_memmove(tab, tab+3, 4);
	printf("%s\n", tab);
	ft_memcpy(tab, "bonjour", 7);
	ft_memmove(tab+3, tab, 4);
	printf("%s\n", tab);
	ft_memcpy(tab, "bonjour", 7);
	ft_memmove(tab, tab, 4);
	printf("%s\n", tab);

	printf("%zu | %s\n", ft_strlcpy(tab, "bonheur", 1), tab);
	printf("%zu | %s\n", strlcpy(tab, "bonheur", 1), tab);

	char tab2[15] = {'b', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
	printf("%zu | %s\n", ft_strlcat(tab2, "bonheur", 20), tab2);
	strcpy(tab2, "bonjour");
	printf("%zu | %s\n", strlcat(tab2, "bonheur", 20), tab2);

	printf("%p\n", (char *)ft_memchr(tab2, 'h', 11));
	printf("%p\n", (char *)memchr(tab2, 'h', 11));

	printf("%d\n", ft_memcmp(tab, tab2, 3));
	printf("%d\n", memcmp(tab, tab2, 3));

	printf("%p\n", ft_strnstr(tab2, "heur", 200));
	printf("%p\n", strnstr(tab2, "heur", 200));

	return (0);
}