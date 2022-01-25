NAME = fixed
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp\
	   Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile Fixed.hpp
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME) 

re: fclean all

.PHONY: all, clean, fclean, re
