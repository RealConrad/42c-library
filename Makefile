# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 10:30:39 by cwenz             #+#    #+#              #
#    Updated: 2023/05/24 14:31:07 by cwenz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME					:= libft.a

# Compiler and flags
CC						:= cc
CFLAGS					:= -Wall -Werror -Wextra
AFLAGS					:= ar -rcs

# Different directories
BUILD_DIR				:= .build

LIBFT_CHECK_DIR			:= ./libft/check/
LIBFT_CONVERSION_DIR	:= ./libft/conversion/
LIBFT_LINKED_LISTS_DIR	:= ./libft/linked-lists/
LIBFT_MEM_DIR			:= ./libft/mem/
LIBFT_STRING_DIR		:= ./libft/string/
LIBFT_WRITE_DIR			:= ./libft/write/

PRINTF_DIR				:= ./printf/

GNL_DIR					:= ./gnl/

# Source files (.c files)
LIBFT_CHECK				:= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
LIBFT_CONVERSION		:= ft_atoi.c ft_itoa.c
LIBFT_LINKED_LISTS		:= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
						  ft_lstmap.c ft_lstnew.c ft_lstsize.c
LIBFT_MEM				:= ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
						  ft_memmove.c ft_memset.c
LIBFT_STRING			:= ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
						  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
						  ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
						  ft_toupper.c
LIBFT_WRITE				:= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
LIBFT_SRC 				+= $(addprefix $(LIBFT_CHECK_DIR), $(LIBFT_CHECK))
LIBFT_SRC 				+= $(addprefix $(LIBFT_CONVERSION_DIR), $(LIBFT_CONVERSION))
LIBFT_SRC 				+= $(addprefix $(LIBFT_LINKED_LISTS_DIR), $(LIBFT_LINKED_LISTS))
LIBFT_SRC 				+= $(addprefix $(LIBFT_MEM_DIR), $(LIBFT_MEM))
LIBFT_SRC 				+= $(addprefix $(LIBFT_STRING_DIR), $(LIBFT_STRING))
LIBFT_SRC 				+= $(addprefix $(LIBFT_WRITE_DIR), $(LIBFT_WRITE))

PRINTF					:= ft_formatting_specifiers.c ft_number_specifiers.c ft_printf.c ft_string_specifiers.c
PRINTF_SRC				:= $(addprefix $(PRINTF_DIR), $(PRINTF))

GNL						:= get_next_line_utils.c get_next_line.c
GNL_SRC					:= $(addprefix $(GNL_DIR), $(GNL))

MAIN_SRC				:= $(LIBFT_SRC) $(PRINTF_SRC) $(GNL_SRC)

# Object files (.o files)
## patsubst replaces %.c with $(BUILD_DIR)/.o for every file in $(LIBFT_SRC),
## and similarly for the other source file lists.
LIBFT_OBJS 				:= $(patsubst %.c, $(BUILD_DIR)/%.o, $(LIBFT_SRC))
PRINTF_OBJS 			:= $(patsubst %.c, $(BUILD_DIR)/%.o, $(PRINTF_SRC))
GNL_OBJS 				:= $(patsubst %.c, $(BUILD_DIR)/%.o, $(GNL_SRC))

OBJS 					:= $(LIBFT_OBJS) $(PRINTF_OBJS) $(GNL_OBJS)

# Create the library, depends on $(NAME)
all: $(NAME)

$(NAME): $(OBJS)
	@$(AFLAGS) $@ $(OBJS)
	@echo $(GREEN)"LIBFT: Created library successfully"$(DEFAULT)

# @mkdir -p $(@D) ensures that the directory exists before trying to place a file in it 
# @D variable represents the directory part of the target
# This will place the .o files in a directory structure mirroring that of the source files, inside $(BUILD_DIR)
$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean the object files
clean:
	@rm -f $(OBJS)
	@rm -r $(BUILD_DIR)
	@echo $(RED)"LIBFT: Remove object files"$(DEFAULT)

# Clean the object files and the library
fclean: clean
	@rm -f $(NAME)
	@echo $(RED)"LIBFT: Removed library"$(DEFAULT)

# Rebuild the library
re: fclean
	$(MAKE) all

.PHONY: all clean fclean re

# Colours to make it look nice :)
DEFAULT                 = "\033[39m"
GREEN                   = "\033[32m"
RED                     = "\033[31m"