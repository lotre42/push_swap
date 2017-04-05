# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/04 15:33:12 by kahantar          #+#    #+#              #
#    Updated: 2017/04/05 14:41:57 by kahantar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= pushswap
CC		= gcc
FLAGS 	= -Wall -Werror -Wextra

SRCS = ft_displaypile.c \
	   ft_add.c \
	   ft_sa.c \
	   ft_ss.c \
	   ft_ra.c \
	   ft_rra.c \
	   ft_rrb.c \
	   ft_rrr.c \
	   ft_rr.c \
	   ft_rb.c \
	   ft_pb.c \
	   ft_pa.c \
	   ft_cutpil.c \
	   ft_addend.c \
	   main.c \
	   ft_cpypileintab.c \
	   ft_cmppile.c \
	   ft_double.c \
	   ft_cpile.c \
	   ft_buble.c \
	   pushswap.c \
	   ft_cmpforalg.c \
	   ft_algsup.c \
	   ft_alginf.c \
	   ft_cpypile.c \
	   ft_searchnb.c \
	   ft_placement.c \
	   ft_listlen.c \
	   ft_pushsup.c \
	   ft_pivot.c \
	   ft_searchpivot.c \
	   ft_searchend.c \
	   ft_cppiletri.c \
	   ft_cppiletriend.c \
	   ft_algsimple.c \
	   ft_reversebuble.c \
	   ft_nbinlist.c \
	   ft_distance.c \
	   ft_cmpnext.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/
	$(CC) $(FLAGS) -o $(NAME) $(SRCS) -L./libft/ -lft

clean:
	@rm -rf $(OBJ)
	make clean -C libft/

fclean: clean
	@rm -rf $(NAME)
	make fclean -C libft/

re: fclean all
