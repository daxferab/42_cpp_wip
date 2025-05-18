NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): megaphone.cpp
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -rf $(NAME).o

fclean: clean
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re fclean
