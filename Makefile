SRCS	=	push_swap.c src/elem_list.c src/end_list.c src/lst_size.c      	   \
			src/new_elem.c src/swap.c src/stop_n.c src/push.c \
			src/rotate.c src/reverse_rotate.c src/get_param.c src/simplify.c   \
			src/lst_last.c src/radix.c src/check.c



OBJS	=	$(SRCS:.c=.o)

GCC		=	gcc

RM		=	rm -rf

FLAGS	=	-Wall -Wextra -Werror

NAME	=	push_swap

all:		$(NAME)

%.o:		%.c
			@$(GCC) -I. -o $@ -c $? $(FLAGS)

$(NAME):	$(OBJS)
			@echo "\033[1;32mMaking Libft.a ..."
			@$(MAKE) -C ./includes
			@$(GCC) $(FLAGS) $(OBJS) -o $(NAME) includes/libft.a
			@echo "\033[1;32mCompilation complete ✅";

clean:
			@$(RM) $(OBJS)
			@$(MAKE) clean -C ./includes
			@echo "\033[1;32mCleaning complete 🧽"

fclean:		clean
			@$(RM) $(NAME)
			@$(MAKE) fclean -C ./includes
			@echo "\033[1;32mFull cleaning complete 🧹"

re:			fclean all
			@echo "\033[1;32mRebuild complete 🔨"

.PHONY:		all fclean clean re
