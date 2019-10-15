# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 11:39:58 by dlartigu          #+#    #+#              #
#    Updated: 2019/09/30 11:39:59 by dlartigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

############## COLORS ##################
_WHITE=$ \x1b[37m
_BLUE=$ \x1b[36m
_GREEN=$ \033[1;32m
_GREY=$ \x1b[33m
_RED=$ \x1b[31m

NAME = fractol
LIB = libft/libft.a
FLAG = -Wall -Wextra -Werror
SRCS_PATH = SRCS/
MLX = -lmlx -framework OpenGL -framework AppKit
SRCS_NAME = main.c\
			ft_checkname.c\
			ft_init.c\
			ft_main_display.c\
			ft_main_display_2.c\
			ft_fract_fil.c\
			ft_fract_fil2.c\
			ft_pixel_put.c\
			ft_julia.c\
			ft_hexalban.c\
			ft_mandelbrot.c\
			ft_tridel.c\
			ft_burningship.c\
			ft_hawk.c\
			ft_tricorn.c\
			ft_exit.c\
			ft_control.c\
			ft_ctrlcol.c\
			ft_mouse.c\
			ft_filcolor.c\
			ft_filcolor_2.c\
			ft_ui.c\
			ft_mburnin.c\

SRCS = $(addprefix $(SRCS_PATH),$(SRCS_NAME))
OBJ = $(SRCSLIB:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):	$(LIB) $(SRCS) $(OBJ) INCLUDES/fractol.h
			@gcc -o $(NAME) $(FLAG) $(SRCS) $(MLX) -L./libft -lft -lpthread
			@echo "$(_GREEN)[OK]$(_BLUE) Fract'ol generated"
$(LIB):
			@make -C libft

clean:
			@make -C libft clean

fclean: clean
			@rm -rf $(NAME)
			@make -C libft fclean
			@echo "$(_GREEN)[OK]$(_WHITE) All Objects deleted"

re: fclean all
