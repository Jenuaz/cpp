NAME = megaphone
CM = clang++
FG = -Wall -Werror -Wextra
SRC = megaphone.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CM) $(FG) $< -o $@

clean:
	rm -Rf *.o

fclean: clean
	rm -Rf $(NAME)

re: fclean all
