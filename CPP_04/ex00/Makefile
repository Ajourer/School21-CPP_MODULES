NAME = animals
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
	   Animal.cpp\
	   Cat.cpp\
	   Dog.cpp\
	   WrongAnimal.cpp\
	   WrongCat.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME) 

re: fclean all

.PHONY: all, clean, fclean, re
