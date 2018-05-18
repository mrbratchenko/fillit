# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbratche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/11 18:56:43 by sbratche          #+#    #+#              #
#    Updated: 2017/12/11 18:56:46 by sbratche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fillit

SRC_DIR =	./src/
OBJ_DIR =	./obj/
INC_DIR =	./inc/

SRC		=	ft_count_first_dots.c \
			ft_create_matrix.c \
			ft_fillit.c \
			ft_first_validation.c \
			ft_free_some_space.c \
			ft_increase_map.c \
			ft_map_initial_map.c \
			ft_place_first.c \
			ft_place_tetramino.c \
			ft_print_map.c \
			ft_push_to_upperleft.c \
			ft_putstr.c \
			ft_read_buffer.c \
			ft_second_validation.c \
			ft_solve_map.c \
			ft_sqrt.c \
			ft_strsplit.c \
			ft_strtrim.c \
			ft_validate_place.c \
			ft_isupper.c \
			ft_memset.c \
			ft_putchar.c \
			ft_strlen.c \
			ft_strncpy.c \
			ft_multiple_free.c


OBJ 	=	$(addprefix $(OBJ_DIR), $(SRC:.c=.o))

PRINT	=	@echo " Building ...  \033[32m [OK] \033[0m"

all: $(NAME)

$(NAME): $(OBJ)
		@echo "\033[32m\n DONE \033[0m" && gcc -Wall -Werror -Wextra $(OBJ) -o $(NAME)

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
		$(PRINT) && mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: %.c
		$(PRINT) && gcc -Wall -Werror -Wextra -c $< -o $@ -I $(INC_DIR)

clean:
		@echo "\033[32m Object files removed \033[0m"
		@echo "\033[K" && rm -f $(OBJ)

fclean: clean
		@echo "\033[32m  Binary file removed \033[0m"
		@echo "\033[K" && rm -f $(NAME)
		@echo "\033[K" && rm -rf $(OBJ_DIR)

re: fclean all

vpath %.c $(SRC_DIR)
