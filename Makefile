NAME	=	libft.a

C_SOURCE	=	$(wildcard ./.c)

all:	$(NAME) 

C_FLAGS:	-Werror -Wextra -Wall

$(NAME):
	cc $(CFLAGS) -c $(NAME) $(C_SOURCE)

clean:
	/rm -r *.o

fclean:
	/rm -r $(NAME)

re: fclean all
