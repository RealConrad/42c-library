# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 10:30:39 by cwenz             #+#    #+#              #
#    Updated: 2023/05/12 15:17:40 by cwenz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME					= libft.a

# Compiler and flags
GCC						= cc
CFLAGS					= -Wall -Werror -Wextra
AFLAGS					= ar -rcs

# Different directories
LIBFT_CHECK_DIR			= ./libft/check/
LIBFT_CONVERSION_DIR	= ./libft/conversion/
LIBFT_LINKED_LISTS_DIR	= ./libft/linked_lists
LIBFT_MEM_DIR			= ./libft/mem/
LIBFT_STRING_DIR		= ./libft/string/
LIBFT_WRITE_DIR			= ./libft/write/

PRINTF_DIR				= ./printf/

GNL_DIR					= ./gnl/

# Source files (.c files)
LIBFT_CHECK				= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
LIBFT_CONVERSION		= ft_atoi.c ft_itoa.c
LIBFT_LINKED_LISTS		= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
						  ft_lstmap.c ft_lstnew.c ft_lstsize.c
LIBFT_MEM				= ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
						  ft_memmove.c ft_memset.c
LIBFT_STRING			= ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
						  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
						  ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
						  ft_toupper.c
LIBFT_WRITE				= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
LIBFT_SRC 				+= $(addprefix $(LIBFT_CHECK_DIR), $(LIBFT_CHECK_SRC))
LIBFT_SRC 				+= $(addprefix $(LIBFT_CONVERSION_DIR), $(LIBFT_CONVERSION_SRC))
LIBFT_SRC 				+= $(addprefix $(LIBFT_LINKED_LISTS_DIR), $(LIBFT_LINKED_LISTS_SRC))
LIBFT_SRC 				+= $(addprefix $(LIBFT_MEM_DIR), $(LIBFT_MEM_SRC))
LIBFT_SRC 				+= $(addprefix $(LIBFT_STRING_DIR), $(LIBFT_STRING_SRC))
LIBFT_SRC 				+= $(addprefix $(LIBFT_WRITE_DIR), $(LIBFT_WRITE_SRC))

PRINTF					= ft_formatting_specifiers.c ft_number_specifiers.c ft_printf.c ft_string_specifiers.c
PRINTF_SRC				= $(addprefix $(PRINTF_DIR), $(PRINTF))

GNL						= ft_get_next_line_utils.c ft_get_next_line.c
GNL_SRC					= $(addprefix $(GNL_DIR), $(GNL))

MAIN_SRC				= LIBFT_SRC PRINTF_SRC GNL_SRC

# Object files (.o files)
OBJS = $(MAIN_SRC:.c=.o)

# Create the library
all: $(NAME)

$(NAME): $(OBJS)
	@$(AFLAGS) $(NAME) $(OBJS)
	@echo $(GREEN)"Created $(NAME) library successfully"$(DEFAULT)

$(OBJS): $(MAIN_SRC)
	@$(CC) -c $(CFLAGS) $(MAIN_SRC)
	@echo $(GREEN)"Compiled files"$(DEFAULT)

clean:
	@rm -f $(OBJS)
	@echo $(RED)"Cleaned all object files"$(DEFAULT)

fclean:
	@rm -f $(NAME)
	@echo $(RED)"Cleaned $(NAME) library"$(DEFAULT)

re: fclean all
	
.PHONY:	all clean fclean re

# Colours to make it look nice :)
DEFAULT					= "\033[39m"
GREEN					= "\033[32m"
RED						= "\033[31m"