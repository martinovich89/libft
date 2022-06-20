#include "../headers/libft.h"
#include <string.h>
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
}