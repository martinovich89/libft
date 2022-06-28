NAME			=	libft.a

TEST			=	libft_test

PATH_SRC		= ./srcs/

SRCS			=	$(addprefix $(PATH_SRC), \
					ft_strlen.c \
					ft_strcmp.c \
					ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strncmp.c \
					ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_ischarset.c \
					ft_calloc.c \
					ft_strdup.c \
					ft_substr.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_chartostr.c \
					ft_skipcharset.c \
					ft_skipnoncharset.c \
					ft_tabdel.c \
					ft_memdel.c \
					ft_split.c \
					ft_itoa.c \
					ft_strmapi.c \
					ft_striteri.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c)

TEST_SRCS		=	$(addprefix test/, \
					main.c)

OBJS			=	$(SRCS:.c=.o)

HEADERS			=	headers/libft.h

CC				=	clang

CFLAGS			=	-Wall -Wextra -Werror # -fsanitize=address -g3

LDFLAGS			= 	-L.

LDLIBS 			= 	-lbsd

RM				=	rm -rf

all : $(NAME)

$(NAME) : $(OBJS) Makefile
	ar rc $@ $(OBJS)
	ranlib $(NAME)

%.o : %.c $(HEADERS) Makefile
	$(CC) $(CFLAGS) -I./headers -c $< -o $@

test : $(TEST)

$(TEST) : $(NAME) $(OBJS) $(TEST_SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(TEST_SRCS) $(LDLIBS) -o $(TEST) libft.a

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME) $(TEST)

re : fclean all