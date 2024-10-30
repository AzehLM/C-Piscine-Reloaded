NAME		:= libft.a

SRCSDIR		:= srcs

SRC		:= \
	ft_swap.c \
	ft_strlen.c \
	ft_strcmp.c \
	ft_putstr.c \
	ft_putchar.c \

OBJS		= $(patsubst %.c,%.o,$(SRCS))

SRCS		:= $(addprefix $(SRCSDIR)/,$(SRC))

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
CPPFLAGS	:= -MMD -MP -I .
DEPS		:= $(OBJS:.o=.d)

AR			:= ar
ARFLAGS		:= -r -c -s

RM			:= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

