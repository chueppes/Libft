NAME	=	libft.a

C_SOURCE	=	ft_calloc.c ft_memset.c ft_strchr.c ft_strmapi.c ft_tolower.c ft_isalnum.c ft_putchar_fd.c ft_strdup.c ft_strncmp.c ft_toupper.c ft_isalpha.c ft_putendl_fd.c ft_striteri.c ft_strncpy.c ft_isascii.c ft_memchr.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c ft_isdigit.c ft_memcmp.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c ft_atoi.c ft_isprint.c ft_memcpy.c ft_split.c ft_strlcpy.c ft_strtrim.c ft_bzero.c ft_itoa.c ft_memmove.c ft_strlen.c ft_substr.c

BONUS_SOURCE	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c  ft_lstclear_bonus.c
 

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

.PHONY: all clean fclean re
