NAME = addressbook
CM = clang++
FG = -Wall 
SRC = main.cpp			\
	  PhoneBook.cpp		\
	  ContactRecord.cpp 
OBJ = $(SRC:.cpp=.o)
all: $(NAME)

$(NAME) : $(OBJ) 
	$(CM) $(FG) $(SRC) -I./ -o $@

%.o	: %.cpp
	$(CM) $(FG) -c $< -I./ 

clean:
	rm -Rf *.o

fclean: clean
	rm -Rf $(NAME)

re: fclean all
