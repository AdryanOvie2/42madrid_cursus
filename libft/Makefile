CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_isascii ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isdigit ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_strhr ft_strdup ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr ft_substr ft_tolower ft_toupper ft_itoa ft_strjoin ft_strtrim ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_strmapi ft_striteri
OBJ = $(SRC:.c=.o)
INCLUDE = -I.

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<

clean:
	rm -f $(OBJ) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
