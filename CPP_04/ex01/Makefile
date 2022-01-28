NAME = animals
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
	   Animal.cpp\
	   Cat.cpp\
	   Dog.cpp\
	   Brain.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile Animal.hpp Cat.hpp Dog.hpp Brain.hpp
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME) 

re: fclean all

.PHONY: all, clean, fclean, re
