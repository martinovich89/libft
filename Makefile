NAME			=	libft.a

TEST			=	libft_test

SRCS			=	$(addprefix srcs/, \
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
					ft_strtrim.c)

TEST_SRCS		=	$(addprefix test/, \
					main.c)

OBJS			=	$(SRCS:.c=.o)

HEADERS			=	headers/libft.h

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror -lbsd -fsanitize=address -g3

RM				=	rm -rf

all : $(NAME)

$(NAME) : $(OBJS) Makefile
	ar rc $@ $(OBJS)
	ranlib $(NAME)

%.o : %.c $(HEADERS) Makefile
	$(CC) $(CFLAGS) -I./headers -c $< -o $@

test : $(TEST)

$(TEST) : $(NAME) $(OBJS) $(TEST_SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(TEST_SRCS) -o $(TEST) libft.a

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME) $(TEST)

re : fclean all