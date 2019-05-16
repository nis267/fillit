# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: bnoyer <bnoyer@le-101.fr>                  +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/22 21:16:56 by bnoyer       #+#   ##    ##    #+#        #
#    Updated: 2017/12/07 18:32:19 by dewalter    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all re clean fclean

NAME = fillit

LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a
LIBFT_INC = -L $(LIBFT_PATH) -lft

CC = gcc

COLOR = echo

CC_FLAGS = -Wall -Werror -Wextra

SRC =		main.c							\
			ft_check.c						\
			ft_tetrasplit.c					\
			ft_newtetri.c					\
			ft_chartolist.c					\
			ft_check_position.c				\
			ft_resol.c						\
			ft_makegrid.c					\
			ft_check_tetri.c				\
			ft_calcul_size_min.c

INCLUDES_PATH = includes

INCLUDES = -I $(LIBFT_PATH) -I $(INCLUDES_PATH)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@ echo "\033[1mCompilation de fillit \033[34m$<\033[37m en \033[31m$@\033[0m ✅ "
	@$(CC) $(CC_FLAGS) -o $@ $^ $(LIBFT_INC)

$(LIBFT):
	@make -C $(LIBFT_PATH)

%.o: %.c ./$(NAME).h
	@ echo "\033[1mCompilation de \033[33m$<\033[37m en \033[32m$@\033[0m ✅ "
	@ $(CC) $(CC_FLAGS) $(INCLUDES) -c $< -o $@

clean:
	@/bin/rm -f $(OBJ)
	@make -C $(LIBFT_PATH) clean

fclean: clean
	@/bin/rm -f $(NAME)
	@make -C $(LIBFT_PATH) fclean

re: fclean all
