NAME = zombieHorde

FILES = main Zombie zombieHorde

CC = c++
RM = rm -fr

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = $(addprefix ./, $(addsuffix .cpp, $(FILES)))
OBJS = $(addprefix ./, $(addsuffix .o, $(FILES)))

all: $(NAME)

./%.o:  ./%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
