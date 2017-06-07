SRC 		= 		fonctions.c \
					free.c \
					malloc.c

OBJ 		= 		$(SRC:.c=.o)
NAME 		= 		libmy_malloc_$(shell uname).so
CC			=		gcc
CFLAGS 		=		-W -Werror -Wall
LDFLAGS		= 		-shared

$(NAME): 			$(OBJS)
					gcc $(OBJS) $(LDFLAGS) -o $(NAME)
					ln -s $(NAME) libmy_malloc.so

all: 				$(NAME)

clean:
					rm -rf $(OBJ)

fclean: 			clean
					rm -rf $(NAME)
					rm -f libmy_malloc.so

re:					fclean all

.PHONY:				all clean fclean re
