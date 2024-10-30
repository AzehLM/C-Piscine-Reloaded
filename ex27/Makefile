NAME		:= ft_display_file

SRCS		:= \
	ft_display_file.c \

OBJS		:= $(patsubst %.c,%.o,$(SRCS))

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
CPPFLAGS	:=-MMD -MP -I .

DEPS		:= $(OBJS:.o=.d)

RM			:= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
