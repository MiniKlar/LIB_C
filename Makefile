NAME = LIB_C.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC =  ./convert/ft_atoi.c \
	./convert/ft_atol.c \
	./convert/ft_itoa.c \
	./convert/ft_tolower.c \
	./convert/ft_toupper.c \
	./gnl/get_next_line.c \
	./is/ft_isalnum.c \
	./is/ft_isalpha.c \
	./is/ft_isascii.c \
	./is/ft_isdigit.c \
	./is/ft_isnegative.c \
	./is/ft_isprint.c \
	./is/ft_isspace.c \
	./mem/ft_bzero.c \
	./mem/ft_calloc.c \
	./mem/ft_memchr.c \
	./mem/ft_memcmp.c \
	./mem/ft_memcpy.c \
	./mem/ft_memmove.c \
	./mem/ft_memset.c \
	./print/ft_print_char.c \
	./print/ft_print_hexaptr.c \
	./print/ft_print_nbr.c \
	./print/ft_print_str.c \
	./printf/ft_printf.c \
	./put/ft_put_unsigned.c \
	./put/ft_putchar_fd.c \
	./put/ft_putendl_fd.c \
	./put/ft_puthexa_lower.c \
	./put/ft_puthexa_ptr.c \
	./put/ft_puthexa_upper.c \
	./put/ft_putnbr_fd.c \
	./put/ft_putstr_fd.c \
	./str/ft_split.c \
	./str/ft_strchr.c \
	./str/ft_strdup.c \
	./str/ft_striteri.c \
	./str/ft_strjoin.c \
	./str/ft_strlcat.c \
	./str/ft_strlcpy.c \
	./str/ft_strlen.c \
	./str/ft_strmapi.c \
	./str/ft_strncmp.c \
	./str/ft_strnstr.c \
	./str/ft_strrchr.c \
	./str/ft_strtrim.c \
	./str/ft_substr.c \
	./struct/ft_lstadd_front.c \
	./struct/ft_lstnew.c \
	./struct/ft_lstsize.c \
	./struct/ft_lstlast.c \
	./struct/ft_lstadd_back.c \
	./struct/ft_lstdelone.c \
	./struct/ft_lstclear.c \
	./struct/ft_lstiter.c \
	./struct/ft_lstmap.c \
	./free/free_tab.c \
	./print/ft_print_tab.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I. -o $@ -c $^

make: make all

clean:
	rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
