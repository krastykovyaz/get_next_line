# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 08:26:41 by lnoisome          #+#    #+#              #
#    Updated: 2019/09/19 10:47:25 by lnoisome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = gcc -Wall -Wextra -Werror $<
SRC = ft_atoi.c \
		ft_bzero.c \
		ft_itoa.c \
		ft_mem{alloc,ccpy,chr,cmp,cpy,del,move,set}.c \
		ft_put{char,char_fd,endl,endl_fd,nbr,nbr_fd,str,str_fd}.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_str{iter,iteri}.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_str{map,mapi}.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strsplit.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_to{lower,upper}.c \
		ft_lst{add,del,delone,iter,map,new}.c \
		ft_is{alnum,alpha,ascii,digit,print}.c
OBJ = ft_atoi.o \
		ft_bzero.o \
		ft_itoa.o \
		ft_mem{alloc,ccpy,chr,cmp,cpy,del,move,set}.o \
		ft_put{char,char_fd,endl,endl_fd,nbr,nbr_fd,str,str_fd}.o \
		ft_strcat.o \
		ft_strchr.o \
		ft_strclr.o \
		ft_strcmp.o \
		ft_strcpy.o \
		ft_strdel.o \
		ft_strdup.o \
		ft_strequ.o \
		ft_str{iter,iteri}.o \
		ft_strjoin.o \
		ft_strlcat.o \
		ft_strlen.o \
		ft_str{map,mapi}.o \
		ft_strncat.o \
		ft_strncmp.o \
		ft_strncpy.o \
		ft_strnequ.o \
		ft_strnew.o \
		ft_strnstr.o \
		ft_strrchr.o \
		ft_strsplit.o \
		ft_strstr.o \
		ft_strsub.o \
		ft_strtrim.o \
		ft_to{lower,upper}.o \
		ft_lst{add,del,delone,iter,map,new}.o \
		ft_is{alnum,alpha,ascii,digit,print}.o
HEADER = libft.h
all: $(NAME)

$(NAME):
		$(FLAG) -c $(SRC) $(HEADER)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

$(HEADER):
	$(FLAG) $(SRC) -c -I $(HEADER)

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME) $(OBJ)
re: fclean all

.PHONY: clean fclean
