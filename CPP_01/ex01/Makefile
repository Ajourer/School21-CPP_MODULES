NAME = zombie
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp\
	   Zombie.cpp\
	   ZombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
