# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rneves-c <rneves-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 15:03:52 by rneves-c          #+#    #+#              #
#    Updated: 2022/03/23 16:06:35 by mfreixo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcat.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJ = ${SRC:.c=.o}
OBJ_BONUS = ${BONUS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

$(NAME): $(OBJ) $(.c.o)
	ar -cr $(NAME) $(OBJ)

all: $(NAME)

bonus: $(NAME) $(OBJ_BONUS) $(OBJ)
	ar -cr $(NAME) $(OBJ_BONUS)

.c.o:
	gcc $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus