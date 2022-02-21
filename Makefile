NAME			=	push_swap

source			=	main.c \
					checker.c \
					init.c \
					operations.c

HEAD			=	include/push_swap.h

LIBFT			=	libft/libft.a

OBJS			=	${addprefix source/,${source:.c=.o}}


CC				=	gcc

CFLAGS			=	-Wall -Werror -Wextra -g -I $(HEAD)

.c.o			:
					${CC} ${CFLAGS}  -c $< -o ${<:.c=.o}

$(NAME)			:	${OBJS} ${LIBFT} ${HEAD}
					${CC} ${CFLAGS} ${LD_FLAGS}  ${OBJS} -o ${NAME} $(LIBFT) 

$(LIBFT)		:
					make -C libft

all				:	${NAME}

clean			:
					make fclean -C libft
					@rm -rf ${OBJS}

fclean			:	clean
					@rm -rf ${NAME}

re				:	fclean all

.PHONY			:	all clean fclean re