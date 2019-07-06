NAME = addressbook
CM = clang++
FG = -Wall -Werror -Wextra
SRC = main.cpp			\
	  PhoneBook.cpp		\
	  ContactRecord.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CM) $(FG) $< -I./ -o $@

clean:
	rm -Rf *.o

fclean: clean
	rm -Rf $(NAME)

re: fclean all
