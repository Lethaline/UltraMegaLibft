# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lolemmen <lolemmen@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 20:48:30 by lolemmen          #+#    #+#              #
#    Updated: 2022/07/09 18:22:45 by lolemmen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: NAME re all fclean clean
.SILENT:

NAME = libft.a

# Compilation

RM = rm -rf
CC = gcc
FLAGS = -Wall -Werror -Wextra

# Directories

SRCSDIR = Srcs
INCSDIR = Includes
OBJSDIR = Objs

# Sources

INC = \
	 libft.h \

SRC = \
	 Arrays/ft_arraylen.c \
	 Arrays/ft_push_a.c \
	 Chars/ft_isalnum.c \
	 Chars/ft_isalpha.c \
	 Chars/ft_isascii.c \
	 Chars/ft_isblank.c \
	 Chars/ft_iscntrl.c \
	 Chars/ft_isdigit.c \
	 Chars/ft_isgraph.c \
	 Chars/ft_islower.c \
	 Chars/ft_isprint.c \
	 Chars/ft_ispunct.c \
	 Chars/ft_isspace.c \
	 Chars/ft_isupper.c \
	 Chars/ft_isxdigit.c \
	 Chars/ft_putchar_fd.c \
	 Chars/ft_putchar.c \
	 Chars/ft_toupper.c \
	 Chars/ft_tolower.c \
	 ft_printf/ft_check_conversion.c \
	 ft_printf/ft_checker.c \
	 ft_printf/ft_convert_base_ul.c \
	 ft_printf/ft_convert_base.c \
	 ft_printf/ft_convert_char.c \
	 ft_printf/ft_convert_hexadecimal.c \
	 ft_printf/ft_convert_int.c \
	 ft_printf/ft_convert_percent.c \
	 ft_printf/ft_convert_pointer.c \
	 ft_printf/ft_convert_string.c \
	 ft_printf/ft_convert_unsigned_int.c \
	 ft_printf/ft_define_width.c \
	 ft_printf/ft_flags.c \
	 ft_printf/ft_init_flags.c \
	 ft_printf/ft_parse_flags.c \
	 ft_printf/ft_parsing.c \
	 ft_printf/ft_printf.c \
	 GetNextLine/get_next_line.c \
	 Lists/ft_lstadd_back.c \
	 Lists/ft_lstadd_front.c \
	 Lists/ft_lstclear.c \
	 Lists/ft_lstdelone.c \
	 Lists/ft_lstiter.c \
	 Lists/ft_lstlast.c \
	 Lists/ft_lstmap.c \
	 Lists/ft_lstnew.c \
	 Lists/ft_lstsize.c \
	 Memories/ft_bzero.c \
	 Memories/ft_calloc.c \
	 Memories/ft_memchr.c \
	 Memories/ft_memcmp.c \
	 Memories/ft_memcpy.c \
	 Memories/ft_memmove.c \
	 Memories/ft_memset.c \
	 Numbers/ft_atof.c \
	 Numbers/ft_atoi.c \
	 Numbers/ft_atol.c \
	 Numbers/ft_itoa.c \
	 Numbers/ft_putnbr_fd.c \
	 Numbers/ft_utoa.c \
	 Strings/ft_putendl_fd.c \
	 Strings/ft_putendl.c \
	 Strings/ft_putstr_fd.c \
	 Strings/ft_putstr.c \
	 Strings/ft_putstrlen.c \
	 Strings/ft_split.c \
	 Strings/ft_str_is_alnum.c \
	 Strings/ft_str_is_alpha.c \
	 Strings/ft_str_is_ascii.c \
	 Strings/ft_str_is_blank.c \
	 Strings/ft_str_is_cntrl.c \
	 Strings/ft_str_is_graph.c \
	 Strings/ft_str_is_lowercase.c \
	 Strings/ft_str_is_numeric.c \
	 Strings/ft_str_is_printable.c \
	 Strings/ft_str_is_punct.c \
	 Strings/ft_str_is_space.c \
	 Strings/ft_str_is_uppercase.c \
	 Strings/ft_str_is_xdigit.c \
	 Strings/ft_strchr.c \
	 Strings/ft_strdup.c \
	 Strings/ft_striteri.c \
	 Strings/ft_strjoin.c \
	 Strings/ft_strlcat.c \
	 Strings/ft_strlcpy.c \
	 Strings/ft_strlen.c \
	 Strings/ft_strlowcase.c \
	 Strings/ft_strmapi.c \
	 Strings/ft_strncmp.c \
	 Strings/ft_strnstr.c \
	 Strings/ft_strpbrk.c \
	 Strings/ft_strrchr.c \
	 Strings/ft_strtok.c \
	 Strings/ft_strtrim.c \
	 Strings/ft_strupcase.c \
	 Strings/ft_substr.c \

# **************************************************************************** #

# Special Chars

LOG_CLEAR = \033[2K
LOG_UP = \033[A
LOG_NOCOLOR = \033[0m
LOG_BLACK = \033[1;30m
LOG_RED = \033[1;31m
LOG_GREEN = \033[1;32m
LOG_YELLOW = \033[1;33m
LOG_BLUE = \033[1;34m
LOG_VIOLET = \033[1;35m
LOG_CYAN = \033[1;36m
LOG_WHITE = \033[1;37m

# **************************************************************************** #

SRCS = $(addprefix $(SRCSDIR)/, $(SRC))
OBJS = $(addprefix $(OBJSDIR)/, $(addsuffix .o, $(basename $(SRC))))
OBJS_DIR = $(sort $(dir $(OBJS)))

INCS_DIR = $(addsuffix /, $(INCSDIR))
INCS = $(addprefix -I, $(INCS_DIR))

all : $(NAME)

$(NAME) : $(OBJS) $(PRINTF)
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_CYAN)assembling... $(LOG_NOCOLOR)$(LOG_UP)"
	ar rcs $(NAME) $(OBJS)
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_GREEN)compiled $(LOG_GREEN)✓$(LOG_NOCOLOR)"

clean :
	$(RM) $(OBJS_DIR)
	$(RM) $(OBJSDIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all

norm :
	norminette

$(OBJSDIR)/%.o: $(SRCSDIR)/%.c
	mkdir -p $(OBJSDIR) $(OBJS_DIR)
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)$<$(LOG_NOCOLOR)$(LOG_UP)"
	$(CC) -c $< -o $@ $(INCS) $(FLAGS)
