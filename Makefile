NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
LIBFT = /libft/libft.a
SRC = ft_print_hex.c ft_print_num.c ft_print_percent.c ft_print_ptr.c ft_print_unsigned.c ft_printf.c ft_printstr.c


OBJ = 	$(SRC:.c=.o)
LIBFT = ./libft/libft.a

LIBFT_SRC_FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
	ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

LIBFT_OBJ = $(LIBFT_SRC:.c=.o)
LIBFT_SRC = $(addprefix libft/, $(LIBFT_SRC_FILES))

SRC += $(LIBFT_SRC)

all: $(NAME)

%.o: %.c
	cc -c $^ -o $@

$(NAME): $(OBJ)
	@ar r $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	make clean -C libft
fclean:
	make clean
	rm -f $(NAME)

re: fclean all