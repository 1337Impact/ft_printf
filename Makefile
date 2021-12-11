NAME = libftprintf.a

CC = gcc

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c basic_utils.c ft_puthexa.c ft_puthexa_ptr.c

OBJCS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
	ar -rc $(NAME) $(OBJCS)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $<

clean :
	rm -f $(OBJCS)

fclean : clean
	rm -f $(NAME)

re : fclean all