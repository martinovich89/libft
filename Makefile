NAME			=	libft.a

SRCS			=	$(addprefix srcs/, \
					ft_strlen.c)

OBJS			=	$(SRCS:.c=.o)

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror #-fsanitize=address -g3

RM				=	rm -rf

all: $(NAME)

$(NAME) : $(OBJS) Makefile
	ar rc $@ $<
	ranlib $(NAME)
#	$(CC) $(CFLAGS) -Iheaders $< -o $@

%.o : %.c Makefile
	$(CC) $(CFLAGS) -I./headers -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all