CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SOURCES = ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c \
ft_toupper.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_memmove.c \
ft_memcpy.c \
ft_bzero.c \
ft_memset.c \
ft_strlen.c \
ft_isascii.c \
ft_isalnum.c \
ft_isdigit.c \
ft_isalpha.c \
ft_calloc.c \
ft_strdup.c \
ft_isprint.c 

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.cc
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re