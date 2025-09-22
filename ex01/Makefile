NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = \
		Contact.cpp\
		main.cpp\
		PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean re fclean
