NAME	=	libft.a

C_SOURCE	=	$(wildcard ./ft_*.c)

BONUS_SOURCE	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c

OBJ	=	${C_SOURCE:.c=.o}

BONUS_OBJ	=	${BONUS_SOURCE:.c=.o}

CC	=	cc

C_FLAGS	=	-Werror -Wextra -Wall

RM	=	rm -f

.c.o:	
	${CC} ${C_FLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

bonus:	 ${BONUS_OBJ}
	ar rcs	${NAME} ${BONUS_OBJ}
	ranlib	${NAME}

$(NAME):	${OBJ}
	ar rcs ${NAME} ${OBJ}
	ranlib ${NAME}

clean:
	${RM} ${OBJ}

fclean:	clean
		${RM} ${NAME}

re: fclean all

comp:
	cc -Wall -Werror -Wextra -L. -lft main.c

.PHONY: all clean fclean re
