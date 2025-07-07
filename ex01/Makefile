NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): phonebook.cpp
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -rf $(NAME).o

fclean: clean
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re fclean
