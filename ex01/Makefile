NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = \
		Contact.cpp\
		main.cpp\
		PhoneBook.cpp\
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $< -o $@

$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(NAME).o

fclean: clean
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re fclean
